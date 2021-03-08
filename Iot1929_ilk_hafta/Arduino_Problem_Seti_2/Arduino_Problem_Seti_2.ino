int kirmizi=4;
int sari=3;
int yesil=2;

void setup() {
pinMode(kirmizi,OUTPUT);
pinMode(sari,OUTPUT);
pinMode(yesil,OUTPUT);

}

void loop() {
digitalWrite(kirmizi,1);
delay(10000);
digitalWrite(sari,1);
delay(2000);
digitalWrite(kirmizi,0);
digitalWrite(sari,0);
digitalWrite(yesil,1);
delay(5000);
digitalWrite(yesil,0);


}
