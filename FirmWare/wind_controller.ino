void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogRead(A0);

  analogWrite(11, analogRead(A0));
}