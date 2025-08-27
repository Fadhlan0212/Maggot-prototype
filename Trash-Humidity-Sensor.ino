const int SoilSensor = A7;

void setup()
{git
  Serial.begin(9600);
}

void loop()
{
  float kelembabanTanah;
  int hasilPembacaan = analogRead(SoilSensor);
  kelembabanTanah = (100 - ((hasilPembacaan/1023.00)*100));

  Serial.print("Persentase Kelembaban Tanah = ");
  Serial.print(kelembabanTanah);
  Serial.println("%");
  delay(1000);
}