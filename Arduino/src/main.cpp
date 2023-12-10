#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>


#define DHT22PIN 2
#define DHTTYPE DHT22
DHT dht(DHT22PIN, DHTTYPE); 

int chk;
float humidity;
float temp;  

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  temp = dht.readTemperature();
  humidity = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" Celsius, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}


// put function declarations here:
int myFunction(int, int);



// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}