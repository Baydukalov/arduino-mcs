// схема https://rm-content.s3.amazonaws.com/57024268467568d777fa4a53/623356/upload-b05cc610-9175-11e6-85c6-95b0dea6d9af.png

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean keyUp = digitalRead(2);
  if (!keyUp) {
    digitalWrite(13, 1);
  }
  else {
    digitalWrite(13, 0);
  }
}
