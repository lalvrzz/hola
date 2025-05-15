//tipo nombre = valor;
//tipos (int,float,char,string)
//no caracter esecia(%$) números
//si minúsculas, todo pegado

//void NombreDeFunción(argumento){}
//argumento : tipo nombre
//Ej. void Avanzar(int velocidad){}



void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  
  EncenderTodos(1000);
  ApagarTodos(500);
 
}
void EncenderTodos(int tiempo){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(tiempo);

}

void ApagarTodos(int tiempo){
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(tiempo);
  
}