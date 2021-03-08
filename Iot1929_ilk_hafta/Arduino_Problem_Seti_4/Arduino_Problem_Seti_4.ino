int pot=A0;
int potdeger;
int mapdeger;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop()
{
potdeger=analogRead(pot);
mapdeger=map(potdeger,0,1023,0,255);
analogWrite(3,mapdeger);
Serial.println(mapdeger);
  
  if (mapdeger>=125){
    digitalWrite(13,1);}
   else{
   digitalWrite(13,0);
  }
  
  
}
