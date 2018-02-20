int out=13;

void setup() {
  pinMode(out,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(out,LOW);
  delay(750);
   digitalWrite(out,HIGH);
  delay(500);
   digitalWrite(out,LOW);
  delay(750);
  

}
