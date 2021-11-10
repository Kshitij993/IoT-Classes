#include "DHT.h"
#define DHTPIN 5          // what pin we're connected to
#define DHTTYPE DHT11     // DHT 11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200); 
  dht.begin();
}

void loop() 
{
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) 
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: "); 
  Serial.print(t);
  Serial.println(" *C ");
}
