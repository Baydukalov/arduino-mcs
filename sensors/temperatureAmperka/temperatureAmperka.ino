// подключаем библиотеку
#include <dht.h>
 
// создаём объект-сенсор
DHT sensor = DHT();
 
void setup()
{
    Serial.begin(9600);
 
    // методом attach объявляем к какому контакту подключен
    // сенсор. В нашем примере это нулевой аналоговый контакт
    sensor.attach(A0);
    //
    // после подачи питания ждём секунду до готовности сенсора к работе
    delay(1000);
}
 
void loop()
{
    // метод update заставляет сенсор выдать текущие измерения
    sensor.update();

//Считываем влажность
float h = sensor.getHumidityInt();

// Считываем температуру
float t = sensor.getTemperatureInt();

// Проверка удачно прошло ли считывание.
if (isnan(h) || isnan(t)) {
Serial.println("Не удается считать показания");
return;
}
Serial.print("Humidity: ");
Serial.print(h);
Serial.print(" Temperature: ");
Serial.println(t);

delay(2000);
}
