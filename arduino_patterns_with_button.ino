void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int p = digitalRead(A0);
  if (p == HIGH) {
    digitalWrite(6, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(6, LOW);
    delay(100);
  }
  p = digitalRead(A1);
  if (p == HIGH) {
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    delay(100);
  }
  else
  {
    digitalWrite(2, LOW);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(5, LOW);
    delay(100);
  }


  p = digitalRead(A2);
  if (p == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(5, LOW);
    delay(100);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(100);

    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    delay(100);
  }
  p = digitalRead(A3);
  if (p == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(100);

  }
}
