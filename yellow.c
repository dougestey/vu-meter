int red = 8;
int green = 10;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(1);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(1);
}