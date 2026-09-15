int sensorPin = A0;
int motorPin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * 5.0 / 1023.0;
  float temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= 30)
  {
    digitalWrite(motorPin, HIGH);
    Serial.println("Fan ON");
  }
  else
  {
    digitalWrite(motorPin, LOW);
    Serial.println("Fan OFF");
  }

  delay(1000);
}