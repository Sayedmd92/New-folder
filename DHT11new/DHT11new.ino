#include<DHT.h>
#include<DHT_U.h>
#define dht_1 2
#define DHTTYPE DHT11
DHT dht(dht_1,DHTTYPE);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  delay(2000);
  float humid=dht.readHumidity();
  float temp=dht.readTemperature();

  Serial.println("Humidity=");
  Serial.println(humid);
  Serial.println("Temperature");
  Serial.println(temp);
  Serial.println("degree centigrade");
  
}
