void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  float sensorValue = analogRead(A2);

  // float millivolt = (sensorValue/1023)*5;


  Serial.print("Sensor Value: ");

  Serial.println(sensorValue);

  if (sensorValue < 280) {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
  }
  else if (sensorValue > 350) {
    digitalWrite(8 , LOW);
    digitalWrite(9, LOW);
  }

  //Serial.print("Voltage: ");

  // Serial.print(millivolt*1000);
  // Serial.println(" mV");

  Serial.println("");
  delay(100);
}
