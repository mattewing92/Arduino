float temp;
int tempPin = 0;
float tempf;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  Serial.print("TEMPRATURE");
  Serial.println();
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  tempf = ((temp * 9) / 5) + 32;
   Serial.print(tempf);
  Serial.print("*F");
  Serial.println();
  Serial.println();
  delay(1000);
}
