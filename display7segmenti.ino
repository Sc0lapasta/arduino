#include <C:\Users\Sc0lapasta\Desktop\arduino\display7segmenti\numeri\numeri.ino>
#define LEDCICLO 12

int cicli = 0;




void loop()
{
  pinMode(LEDCICLO, OUTPUT);
  digitalWrite(LEDCICLO, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  cicli++;
  n1();
  delay(1000);
  n2();
  delay(1000);
  n3();
  delay(1000);
  n4();
  delay(1000);
  n5();
  delay(1000);
  n6();
  delay(1000);
  n7();
  delay(1000);
  n8();
  delay(1000);
  n9();
  delay(1000);
  digitalWrite(LEDCICLO, LOW);  // turn the LED on (HIGH is the voltage level)
}