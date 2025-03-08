// C++ code
//
/*
  PROJETO:Carrinho
  AUTOR:  Leonardo Cassiano
  DATA    22.09.2023
  V 1.0
 */ 
 
#define Potenciometro		 A0
#define Motor1               11
#define Sensor1              2
#define Motor2               9
#define Sensor2              4

int  ValorAnalogico;
int  ValorMotor1;
int  ValorMotor2;

void setup()
{
  pinMode(Sensor1,INPUT);
  pinMode(Sensor1,INPUT);
  Serial.begin(9600);
}

void loop()
{
  ValorAnalogico = analogRead(Potenciometro);
  ValorMotor1 = ValorAnalogico / 4 ;
  if(digitalRead(Sensor1))   analogWrite (Motor1, 0);
  else                      analogWrite (Motor1, ValorMotor1);
  
  ValorAnalogico = analogRead(Potenciometro);
  ValorMotor2 = ValorAnalogico / 4 ;
  if(digitalRead(Sensor2))   analogWrite (Motor2, 0);
  else                      analogWrite (Motor2, ValorMotor2);
  
  
  Serial.print("valor lido = ");
  Serial.println(ValorAnalogico);
  Serial.print("valor PWM = ");
  Serial.println(ValorMotor1);
  Serial.println(ValorMotor2);
  
  delay(300);
}

