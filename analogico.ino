int Xin= A0; // X Input Pin
int Yin = A1; // Y Input Pin
int KEYin = 2; // Push Button
int i = 0;
//if(x >= 510 && y >= 500)
//{
  //fermo
//}
//if(x >= 1020 && y >= 500)
//{
  //sopra
//}
//if(x == 0 && y >= 500)
//{
  //sotto
//}
//if(x >= 510 && y == 0)
//{
  //sinistra
//}
//if(x >= 540 && y >= 1020)
//{
  //destra
//}
void setup ()
{
 pinMode (KEYin, INPUT);
 Serial.begin (9600);
}
void loop ()
{
 int xVal, yVal, buttonVal;
 xVal = analogRead (Xin);
 yVal = analogRead (Yin);
 buttonVal = digitalRead (KEYin);

 Serial.print("\nCOPPIA: "); 
 Serial.println(i += 1);
 Serial.print("\nX = ");
 Serial.println (xVal, DEC);

 Serial.print ("Y = ");
 Serial.println (yVal, DEC);
 delay (1000);
}