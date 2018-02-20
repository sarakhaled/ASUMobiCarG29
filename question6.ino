#define Ainput 0
#define Binput 1
#define Cinput 2
int led1=13;
int led2=12;
int led3=11;

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led2,OUTPUT);
  pinMode(Ainput,INPUT);
 pinMode(Binput,INPUT);
 pinMode(Cinput,INPUT);



}

void loop() {
int val1=digitalRead(Ainput);
int val2=digitalRead(Binput);
int val3=digitalRead(Cinput);
if(val1>=val2&&val1>=val3)
{
digitalWrite(led1,HIGH);  
  }
  else if(val2>=val1&val2>=val3)
{
digitalWrite(led2,HIGH);  
  }
  else
{
digitalWrite(led3,HIGH);  
  }
  digitalWrite(led1,LOW);  
digitalWrite(led2,LOW);  
digitalWrite(led3,LOW);  



}
