// светодиодная шкала подключена к группе пинов расположенных
// подряд. Даём понятные имена первому и последнему пинам
#define FIRST_LED_PIN  2
#define LAST_LED_PIN   11

void setup()
{
  // в шкале 10 светодиодов. Мы бы могли написать pinMode 10
  // раз: для каждого из пинов, но это бы раздуло код и
  // сделало его изменение более проблематичным.
  // Поэтому лучше воспользоваться циклом. Мы выполняем
  // pinMode для (англ. for) каждого пина (переменная pin)
  // от первого (= FIRST_LED_PIN) до последнего включительно
  // (<= LAST_LED_PIN), всякий раз продвигаясь к следующему
  // (++pin увеличивает значение pin на единицу)
  // Так все пины от 2-го по 11-й друг за другом станут выходами
  for (int pin = FIRST_LED_PIN; pin <= LAST_LED_PIN; ++pin)
  {
    pinMode(pin, OUTPUT);
  }

  pinMode(A0, INPUT);
  //Serial.begin(9600);
}

void loop()
{
  int val, pin;
  val = map(analogRead(A0), 0, 1023, 2, 11);
  // val = (analogRead(A0) / 103) + 2;
  // Serial.println(val);

  for (int pin = 2; pin <= val; ++pin)
  {
   digitalWrite(pin, HIGH);
   delay(1);
   digitalWrite(pin, LOW);
  }

}
