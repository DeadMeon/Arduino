/*
  décrivez votre code ici
*/

int up = 0;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(4, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  if (digitalRead(4) == HIGH) {
    digitalWrite(11, LOW);
    if (up == 1) {
      // La chaise descant
      digitalWrite(7, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
      digitalWrite(7, LOW);
      up = 0;
      delay(1000); // Wait for 1000 millisecond(s)
    } else {
      // La chaise monte
      digitalWrite(8, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
      digitalWrite(8, LOW);
      up = 1;
      delay(1000); // Wait for 1000 millisecond(s)
    }
  }
}
