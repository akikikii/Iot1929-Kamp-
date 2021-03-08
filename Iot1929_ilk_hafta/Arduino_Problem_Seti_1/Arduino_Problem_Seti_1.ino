

void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
for (int i=2;i<7;i++){
  digitalWrite(i,1);
  delay(500);
  digitalWrite(i,0);}

for (int i=6;i>1;i--){
  digitalWrite(i,1);
  delay(500);
  digitalWrite(i,0);
}
}
