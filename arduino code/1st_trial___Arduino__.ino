/*
 HC-SR04 Ping distance sensor:
 VCC to arduino 5v 
 GND to arduino GND
 Echo to Arduino pin 7 
 Trig to Arduino pin 8
explain the connection
 */


#define echoPin 7 // Echo Pin
#define trigPin 8 // Trigger Pin
#define Pin 9
#define Pin 10
#define Pin 11
#define Pin 12

int maximumRange = 55; // Maximum range needed
int minimumRange = 0; // Minimum range needed
long duration, distance; // Duration used to calculate distance

int forward = 9; // forward pin
int front = 10; // front pin
int reverse = 11; // reverse pin
int back = 12; // back pin


void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(forward, OUTPUT);
 pinMode(front, OUTPUT);
 pinMode(reverse, OUTPUT);
 pinMode(back, OUTPUT);
}

void go_forward()
{
digitalWrite(forward,HIGH); // turn forward motor on
digitalWrite(front,HIGH); // turn front motor on
digitalWrite(reverse,LOW); // turn reverse motor off
digitalWrite(back,LOW); // turn back motor off
}
void go_rvrs()
{
digitalWrite(forward,LOW); // turn forward motor off
digitalWrite(front,LOW); // turn front motor off
digitalWrite(reverse,HIGH); // turn reverse motor on
digitalWrite(back,HIGH); // turn back motor on
}

void stop_car()
{
digitalWrite(reverse,LOW); // turn reverse motor off
digitalWrite(forward,LOW); // turn forward motor off
digitalWrite(front,LOW);
digitalWrite(back,LOW);
}
void go_right()
{
digitalWrite(forward,HIGH); // turn forward motor on
digitalWrite(back,HIGH); // turn back motor on
digitalWrite(reverse,LOW); // turn reverse motor off  
digitalWrite(front,LOW); // turn front motor off
}
// the loop() method runs over and over again,
// as long as the Arduino has power





void loop() {
/* 
The following trigPin/echoPin cycle is used to determine the
 distance of the nearest object by bouncing soundwaves off of it. 
*/ 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 
 //Calculate the distance (in cm) based on the speed of sound.
 distance = duration/58.2;
 
 

if (distance > maximumRange || distance < minimumRange){
 /* Send a positive number to computer and Turn MOTORS ON 
 to indicate "out of range" */
 Serial.println("1"); // can be removed ?
 go_forward();


}
 else {
  go_rvrs();
  delay(250);
  go_right();
 delay(500);
 
 
 }
 //Delay 50ms before next reading.
 delay(50);
}
