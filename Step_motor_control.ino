#include<Stepper.h>
int stepsPerRevolution = 200;  // hehe
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);


void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  myStepper.setSpeed(70);
  Serial.begin(9600);
}

void loop() {
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
//    if(Serial.available() >=4){
//        char _buffer[4];
//        Serial.readBytes(_buffer, 4);
//        Serial.println(_buffer);
//        myStepper.step(_buffer[0]);
//    }
  
}
