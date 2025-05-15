int tiempo=200;//la variable tiempo le aignamos el valor 200
int pin;//declaramos la variable pin,sin asignarle valor momentáneamente


void setup()
{
  for (pin=8; pin<=12; pin++)//inica pin con alor iniacial 8 y se va incrementando hasta 12 
  {
    pinMode (pin,OUTPUT);//pin asume el valor asignado y lo declara como salida
  }
}

void loop()
{
for (pin=8; pin<=12; pin++)
 { 
  digitalWrite (pin,HIGH);
  delay (tiempo);
  digitalWrite (pin,LOW);
  delay (tiempo);
 }  
}