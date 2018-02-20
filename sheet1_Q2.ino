int out[]={4,5,6,7};
void setup() {
 for( int i=0 ; i<4 ; i++)
 {
  pinMode(out[i],OUTPUT);
 }
  // put your setup code here, to run once:

}

void loop() {
   for( int i=0 ; i<4 ; i++)
 {
  digitalWrite( out[i],HIGH);
  delay(1000);
  digitalWrite( out[i],LOW);
 }
  // put your main code here, to run repeatedly:

}
