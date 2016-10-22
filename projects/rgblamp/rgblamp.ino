void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {

  for (int i = 0; i < 256; i++) {
    analogWrite(9, i);
    // analogWrite(10, i);
    // analogWrite(11, 255 - i);
    delay(200);
  }

/*   for (int i = 0; i < 256; i++) {
    analogWrite(9, i / 2);
    // analogWrite(10, i);
    analogWrite(11, 255 - i);
  } */

}
