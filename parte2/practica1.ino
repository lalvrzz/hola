void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  //comportamiento de los pines con pinMode(); 
}

void loop()
{
  digitalWrite(8,HIGH);
  delay(500);//wait for 1000 millisecond(s)
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(500);//wait for 1000 millisecond(s)
  digitalWrite(9,LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(10,HIGH);
  delay(500);//wait for 1000 millisecond(s)
  digitalWrite(10,LOW);
  delay(500); // Wait for 1000 millisecond(s)
}