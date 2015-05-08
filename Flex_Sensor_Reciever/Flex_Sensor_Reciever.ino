#include <Servo.h> 
 
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;// create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position
int val1;
int val2;
int val3;
int val4;
int val5;
 
void setup() 
{ 
  Serial.begin(9600);
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(9);
  myservo4.attach(10);
  myservo5.attach(11);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
if(Serial.available() >= 5){
  val1 = Serial.read();
  val2 = Serial.read();
  val3 = Serial.read();
  val4 = Serial.read();
  val5 = Serial.read();
  
  Serial.print(val1);
  Serial.print(" | ");
  Serial.print(val2);
  Serial.print(" | ");
  Serial.print(val3);
  Serial.print(" | ");
  Serial.print(val4);
  Serial.print(" | ");
  Serial.println(val5);
  
  myservo1.write(val1*9);
  myservo2.write(val2*9);
  myservo3.write(val3*9);
  myservo4.write(val4*9);
  myservo5.write(val5*9);
  delay(50);
}
}
