#include "DHT.h"

#define pin 2     

#define modul DHT11   
 int kelvin;
 int fahrenheit;



DHT dht(pin, modul);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  
  delay(2000);

  float nem = dht.readHumidity();
  
  float celcius = dht.readTemperature();

  kelvin=celcius+273.15;
  fahrenheit=(celcius*(9/5))+32;

  Serial.print("Nem Oranı(%):");
  Serial.print(nem);
  Serial.print(" Celcius:");
  Serial.print(celcius);
  Serial.print(" Kelvin:");
  Serial.print(kelvin);
  Serial.print(" Fahrenheit:");
  Serial.print(fahrenheit);
  Serial.println();
  
  
  

 
  
  
 
}
