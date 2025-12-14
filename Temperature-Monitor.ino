int LM35Pin = A0;
float voltage;
float Temperature;

void setup()
{
  pinMode(3,OUTPUT);  //RED-LED
  pinMode(5,OUTPUT);  //GREEN-LED
  Serial.begin(9600);
}

void loop() 
{
  int TempValue = analogRead(LM35Pin);
  voltage = TempValue *(5.0 / 1023.0);
  Temperature = voltage * 100;

  Serial.print("Temperature : ");
  Serial.print(Temperature);
  Serial.println(" C ");

  delay(3000);

  if(Temperature <= 24.00)
  {
    digitalWrite(5,1);
  }
  else
  {
    digitalWrite(5,0);
  }

  if (Temperature >= 28.00)
  {
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(3,0);
  }
}
