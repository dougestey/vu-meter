int barOne = 2;
int barTwo = 3;
int barThree = 4;
int barFour = 5;
int barFive = 6;
int barSix = 7;
int barSeven = 8;
int barEight = 9;

void setup()
{
  pinMode(barOne, OUTPUT);
  pinMode(barTwo, OUTPUT);
  pinMode(barThree, OUTPUT);
  pinMode(barFour, OUTPUT);
  pinMode(barFive, OUTPUT);
  pinMode(barSix, OUTPUT);
  pinMode(barSeven, OUTPUT);
  pinMode(barEight, OUTPUT);
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
  delay(500);
  digitalWrite(barFive, HIGH);
  delay(750);
  digitalWrite(barSix, HIGH);
  delay(1000);
  digitalWrite(barSeven, HIGH);
  delay(1500);
  digitalWrite(barEight, HIGH);
  delay(2000);

  // lows
  digitalWrite(barEight, LOW);
  delay(50);
  digitalWrite(barSeven, LOW);
  delay(50);
  digitalWrite(barSix, LOW);
  delay(50);
  digitalWrite(barFive, LOW);
  delay(50);
  digitalWrite(barFour, LOW);
  delay(50);
  digitalWrite(barThree, LOW);
  delay(275);
  digitalWrite(barTwo, LOW);
  delay(500);
  digitalWrite(barOne, LOW);
  delay(2000);
}
