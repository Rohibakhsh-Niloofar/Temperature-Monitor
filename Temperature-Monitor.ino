void setup()
{
  pinMode(3,OUTPUT);  //RED-LED
  pinMode(5,OUTPUT);  //GREEN-LED
}

void loop() 
{
  digitalWrite(3,1);
  delay(5000);
  digitalWrite(3,0);

  digitalWrite(5,1);
  delay(5000);
  digitalWrite(5,0);
  
}
