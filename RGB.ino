
#define rosso 8
#define blu 10
#define verde 9

void setup()
{
  pinMode(rosso, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(blu, OUTPUT);
}
void accendiRosso(int perQuanto)
{
  analogWrite(rosso, 255);
  delay(perQuanto);
  analogWrite(rosso, 0);
}
void accendiVerde(int perQuanto)
{
  analogWrite(verde, 255);
  delay(perQuanto);
  analogWrite(verde, 0);
}
void accendiBlu(int perQuanto)
{
  analogWrite(blu, 255);
  delay(perQuanto);
  analogWrite(blu, 0);
}
