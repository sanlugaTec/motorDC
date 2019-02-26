int IN1 = 5;  // Control de velocidad
int IN2 = 6;  // Motor
                      
void setup() 
{ 
    Serial.begin (9600);
    pinMode(IN2, OUTPUT);   
} 

void loop() 
{ 
    int potentiometerVal = analogRead(A0);
    Serial.println(potentiometerVal);
    activa_motor(potentiometerVal);
}

void activa_motor(int potValue)
{
      int mappedVal = map(potValue,1022,0,0,255);
      // Adelante
      digitalWrite(IN2,HIGH);         
      analogWrite(IN1, mappedVal);   //Control de velocidad PWM
      delay(30); 
}
