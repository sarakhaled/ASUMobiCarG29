
//SHEET2 Embedded system development fundamentals
//Q1
int dipswitch[]={2,3,4,5,6,7,8,9};
int led=13;
int value;
void setup() {
  pinMode(led,OUTPUT);
for(int index=0;index<=8;index++){
  pinMode(dipswitch[index],INPUT);
  }
}

void loop() {
  for(int in=0;in<=8;in++){
    digitalWrite(led,HIGH);
value+=digitalRead(dipswitch[in]);
delay(4*value);
    digitalWrite(led,LOW);
    }
}
