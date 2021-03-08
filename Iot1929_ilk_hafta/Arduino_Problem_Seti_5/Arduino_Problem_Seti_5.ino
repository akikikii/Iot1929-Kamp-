#include <Servo.h>
Servo servom;

void setup() {
servom.attach(3);
}

void loop(){
for(int i=0;i<=180;i=i+15){
  servom.write(i);
  delay(500);
  
}
for(int i=180;i>0;i=i-30){
  servom.write(i);
  delay(500);
}
}
