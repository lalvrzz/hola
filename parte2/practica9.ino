
char dato;
void setup()
{
    Serial.begin(9600);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
}
void loop()
{
    if(Serial.available())
    {
        dato=Serial.read();
        if(dato=='a')
        {
            for(int contador =0;contador<5;contador++)
            {
                Encendertodos(1000);
                ApagarTodos(1000);
            }
            delay(1000);
            digitalWrite(2,HIGH);
        }
        if(dato=='b')
        {
            for(int contador =10;contador>0;contador--)
            {
                Encendertodos(1000);
                ApagarTodos(1000);
            }
            delay(1000);
            digitalWrite(2,HIGH);
        }
    }
}
void Encendertodos(int tiempo)
{
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(tiempo);
}
void ApagarTodos(int tiempo)
{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(tiempo);
}