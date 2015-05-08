int const potPin1 = A0;
int const potPin2 = A1;
int const potPin3 = A2;
int const potPin4 = A3;
int const potPin5 = A4;
int potVal1;
int potVal2;
int potVal3;
int potVal4;
int potVal5;


void setup(){
  Serial.begin(9600);
}

void loop(){
  
  potVal1 = analogRead(potPin1);
  potVal1 = map(potVal1,515, 540,0,12);
  potVal1 = constrain(potVal1,0,12);
  Serial.write(potVal1);
  
  potVal2 = analogRead(potPin2);
  potVal2 = map(potVal2,612, 670,0,12);
  potVal2 = constrain(potVal2,0,12);
  Serial.write(potVal2);
  
  potVal3 = analogRead(potPin3);
  potVal3 = map(potVal3,570, 670,0,12);
  potVal3 = constrain(potVal3,0,12);
  Serial.write(potVal3);
  
  potVal4 = analogRead(potPin4);
  potVal4 = map(potVal4,620, 680,0,12);
  potVal4 = constrain(potVal4,0,12);
  Serial.write(potVal4);
  
  potVal5 = analogRead(potPin5);
  potVal5 = map(potVal5,510, 620,0,12);
  potVal5 = constrain(potVal5,0,12);
  Serial.write(potVal5);
  
  /*
  Serial.print(" Pinky: ");
  Serial.print(analogRead(A0));
  Serial.print(" | Ring: ");
  Serial.print(analogRead(A1));
  Serial.print(" | Middle: ");
  Serial.print(analogRead(A2));
  Serial.print(" | Pointer: ");
  Serial.print(analogRead(A3));
  Serial.print(" | Thumb: ");
  Serial.println(analogRead(A4));
  */
  
  
  delay(100);
}
