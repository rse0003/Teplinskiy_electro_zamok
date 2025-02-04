void cartlamp(){
//сигнал лампа 
  digitalWrite(13, 1);  // зажигаем светодиод
  delay(100);  // ждём секунду
  digitalWrite(13, 0);  // выключаем светодиод
  delay(100);  // ждём секунду
}
void servoclouse(){
//серво закрыть 
}
void servoopen(){
//серво открыть 
}

void cart(){
//проверить карту
}

void loop(){
  //считывает
void setup() {
  // put your setup code here, to run once:
   // Инициализируем цифровой вход/выход в режиме выхода. [2](https://arduino.ru/tutorials/blink)
  // Выход 13 на большинстве плат Arduino подключён к светодиоду на плате. [2](https://arduino.ru/tutorials/blink)
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}

