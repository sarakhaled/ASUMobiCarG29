int green = 2;
int yellow = 4;
int red = 7;
int analogvalue = 0;
float voltage = 0;
int ledDelay = 1000;
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  analogvalue = analogRead(A0);
  voltage = 0.0048 * analogvalue ;
  if (voltage >= 1.5)
    digitalWrite(green, HIGH);
  else if (voltage > 1.2 && voltage < 1.5)
    digitalWrite (yellow, HIGH);
  else if (voltage <= 1.2)
digitalWrite (red, HIGH);
  delay(ledDelay);
  digitalWrite(red, LOW);
    digitalWrite (yellow, LOW);
  digitalWrite(green, LOW);
}

