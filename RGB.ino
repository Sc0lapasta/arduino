//prende in input una distanza dal coso a infrarossi e da in output la distanza effettiva dal coso all'oggetto
//rosso = no input
//verde = input
//bianco = vicino

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

//LED RGB FUNZIONA
