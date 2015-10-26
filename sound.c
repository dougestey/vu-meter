const int maxScale = 8;
 
const int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)
unsigned int sample;

int barOne = 2;
int barTwo = 3;
int barThree = 4;
int barFour = 5;
int barFive = 6;
int barSix = 7;
int barSevenR = 8;
int barSevenG = 9;
int barEight = 10;

int barSeven = 0;
 
void setup() 
{
  pinMode(barOne, OUTPUT);
  pinMode(barTwo, OUTPUT);
  pinMode(barThree, OUTPUT);
  pinMode(barFour, OUTPUT);
  pinMode(barFive, OUTPUT);
  pinMode(barSix, OUTPUT);
  pinMode(barSevenR, OUTPUT);
  pinMode(barSevenG, OUTPUT);
  pinMode(barEight, OUTPUT);
}
 
void loop() 
{
  unsigned long startMillis = millis();  // Start of sample window
  unsigned int peakToPeak = 0;   // peak-to-peak level

  unsigned int signalMax = 0;
  unsigned int signalMin = 1024;

  while (millis() - startMillis < sampleWindow)
  {
    sample = analogRead(0); 
    if (sample < 1024)  // toss out spurious readings
    {
       if (sample > signalMax)
       {
          signalMax = sample;  // save just the max levels
       }
       else if (sample < signalMin)
       {
          signalMin = sample;  // save just the min levels
       }
    }
  }
  peakToPeak = signalMax - signalMin;

  // map 1v p-p level to the max scale of the display
  int displayPeak = map(peakToPeak, 0, 1023, 0, maxScale);

  // draw the new sample
  for (int i = 1; i <= maxScale; i++)
  {
    if (i >= displayPeak) { // sample is too low to be shown in this bar, so write it LOW
       if (i == 7){
        digitalWrite(8, LOW);
       } else if (i == 8) {
        digitalWrite(10, LOW);
       } else {
        digitalWrite(i + 1, LOW);
       }
    } else { // sample is in the range of this bar, so light it
      if (i == 7){
        digitalWrite(8, HIGH);
      } else if (i == 8) {
        digitalWrite(10, HIGH);
      } else {
        digitalWrite(i + 1, HIGH);
      }
    }
  }
}