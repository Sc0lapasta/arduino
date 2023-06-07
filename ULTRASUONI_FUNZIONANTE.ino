//preso da: https://www.arduinofacile.it/2019/03/12/lezione-difficile-2-il-sensore-a-ultrasuoni/
const int pinTrigger = 9;
const int pinEcho    = 10;
 
void setup() {
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  Serial.begin(9600);
  Serial.print( "Sensore Ultrasuoni: ");
}
 
void loop() { 
  // imposta l'uscita del trigger LOW
  digitalWrite(pinTrigger, LOW);
  // imposta l'uscita del trigger HIGH per 10 microsecondi
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
  
  // calcolo del tempo attraverso il pin di echo
  long durata = pulseIn(pinEcho, HIGH);
  long distanza = durata/58.31;
  
  Serial.print("distanza: ");
  // dopo 38ms è fuori dalla portata del sensore
  if( durata > 38000 ){
    Serial.println("Fuori portata");
  }
  else{ 
    Serial.print(distanza); 
    Serial.println(" cm");
  }
   
  // Aspetta 1000 microsecondi prima di generare l'impulso successivo
  delay(1000);
}
