int LM35Pin = A0;
float voltage;
float Temperature;

void setup()
{
  pinMode(3,OUTPUT);  //BLUE-LED
  pinMode(5,OUTPUT);  //GREEN-LED
  pinMode(7,OUTPUT);  //RED-LED
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
  if (Temperature < 24.00)
  {
    digitalWrite(3,1);  //BLUE-LED-ON
    digitalWrite(5,0);  //GREEN-LED-OFF
    digitalWwrite(7,0); //RED-LED-OFF
  }
  else if (Temperature >= 24.00 && Temperature <= 28.00)
  {
    digitalWrite(5,1);  //GREEN-LED-ON
    digitalWrite(3,0);  //BLUE-LED-OFF
    digitalWrite(7,0);  //RED-LED-OFF
  }
  else
  {
    digitalWrite(7,1);  //RED-LED-ON
    digitalWrite(5,0);  //GREEN-LED-OFF
    digitalWrite(3,0);  //BLUE-LED-OFF
  }
}
