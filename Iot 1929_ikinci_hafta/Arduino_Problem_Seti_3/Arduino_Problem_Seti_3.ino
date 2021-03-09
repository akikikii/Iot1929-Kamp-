#include <Servo.h>
#include <Joystick.h>
Servo servo1;
Servo servo2;

Joystick_ Joystick;
int XAxis=0;
int YAxis=0;

const bool initAutoSendState=true;

void setup() {
 servo1.attach(2);
 servo2.attach(3);
 

 Joystick.begin();

}

void loop() {
   XAxis= analogRead(A1);
  XAxis= map(XAxis,0,1023,0,255);
  Joystick.setXAxis(XAxis);

  YAxis = analogRead(A0);
  YAxis = map(YAxis,0,1023,0,125);
  Joystick.setYAxis(YAxis);
  servo1.write(YAxis);
  servo2.write(XAxis);
   delay(10);
    
  }

  
