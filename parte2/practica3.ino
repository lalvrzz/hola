// tipo nombre = valor;
// tipos (int,float,char,string)
// no caracter especial(45) números
// si minúsculas, todo pegado

int tiempo= 1000;
  
  
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  //comportamiento de los pines con pinmode();
}

void loop()
{
  EncenderTodos1();
  delay(tiempo);
  ApagarTodos();
  delay(tiempo);
    
}
// void nombre () ()
void EncenderTodos1(){
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);

}

void ApagarTodos(){
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);  
  
}
  