#include "DHT.h"

#define DHTPIN 2       // Pin where DHT11 data is connected
#define DHTTYPE DHT11  // DHT 11 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Reading temperature or humidity takes ~250 milliseconds
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Celsius
  float temperatureF = dht.readTemperature(true); // Fahrenheit

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print readings
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  delay(2000); // Wait 2 seconds before next reading
}