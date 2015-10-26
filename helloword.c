int barOne = 2;
int barTwo = 3;
int barThree = 4;
int barFour = 5;

void setup()
{
  pinMode(barOne, OUTPUT);
  pinMode(barTwo, OUTPUT);
  pinMode(barThree, OUTPUT);
  pinMode(barFour, OUTPUT);
}

void loop()
{
  digitalWrite(barOne, HIGH);
  delay(50);
  digitalWrite(barTwo, HIGH);
  delay(50);
  digitalWrite(barThree, HIGH);
  delay(100);
  digitalWrite(barFour, HIGH);
  delay(1000);
  digitalWrite(barFour, LOW);
  delay(50);
  digitalWrite(barThree, LOW);
  delay(175);
  digitalWrite(barTwo, LOW);
  delay(300);
  digitalWrite(barOne, LOW);
  delay(1000);
}