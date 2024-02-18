#include <Arduino.h>

void setup()
{
  // indicando para o arduíno quais portas vamos usar
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  // Inicializa a comunicação serial
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(6, HIGH);
  Serial.println("green on");
  delay(4000);
  digitalWrite(6, LOW);
  Serial.println("green off");
  delay(4000);

  digitalWrite(5, HIGH);
  Serial.println("yellow on");
  delay(4000);
  digitalWrite(5, LOW);
  Serial.println("yellow off");
  delay(4000);

  digitalWrite(7, HIGH);
  Serial.println("red on");
  delay(4000);
  digitalWrite(7, LOW);
  Serial.println("red off");
  delay(4000);

  // Desliga todos os LEDs após o loop
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
}
