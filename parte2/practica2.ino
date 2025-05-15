void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //comportamiento de los pines con pinmode();
}

void loop()
{
 EncerderTodos(1000);
 ApagarTodos(500);
}

void EncerderTodos (int tiempo){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
 delay(tiempo);
}  
void ApagarTodos(int tiempo) {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
delay(tiempo);  
}