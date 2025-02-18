void lamp(int a){
//сигнал лампа 
  if (a==1){
    digitalWrite(13, 1);  // зажигаем светодиод
    delay(100);  // ждём секунду
  } else{
    digitalWrite(13, 0);  // выключаем светодиод
    delay(100);  // ждём секунду
  }
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
void debug (long a) {
    Serial.println(a);
}          

void setup() {
    Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  lamp(1);
  delay(1000);
  lamp(0);
  delay(1000);
} 
