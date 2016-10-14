// схема https://rm-content.s3.amazonaws.com/57024268467568d777fa4a53/623338/upload-85c94170-9171-11e6-9262-e1c06c6f5c6d.png

void setup() {
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  digitalWrite(8, HIGH);
  delay(4000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(4000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
}
