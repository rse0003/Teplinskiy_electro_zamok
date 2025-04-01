#include <Servo.h>  // подключаем библиотеку для работы с сервоприводом [4](https://xn--18-6kcdusowgbt1a4b.xn--p1ai/%D1%81%D0%B5%D1%80%D0%B2%D0%BE%D0%BF%D1%80%D0%B8%D0%B2%D0%BE%D0%B4-%D0%B0%D1%80%D0%B4%D1%83%D0%B8%D0%BD%D0%BE/)
Servo servo1;  // объявляем переменную servo типа «servo1» [4](https://xn--18-6kcdusowgbt1a4b.xn--p1ai/%D1%81%D0%B5%D1%80%D0%B2%D0%BE%D0%BF%D1%80%D0%B8%D0%B2%D0%BE%D0%B4-%D0%B0%D1%80%D0%B4%D1%83%D0%B8%D0%BD%D0%BE/)

#include "SPI.h"
#include "MFRC522.h"

#define RST_PIN 9  // RES pin
#define SS_PIN 10  // SDA (SS) pin

MFRC522 mfrc522(SS_PIN, RST_PIN);  // создание объекта mfrc522

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  delay(4);
  mfrc522.PCD_DumpVersionToSerial();
  Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
}




//1 горит
//0 не горит

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

//серво закрыть 
void zamokZakr(){

  servo1.write(0);

}


//серво открыть 
void zamokOtkr(){
    servo1.write(180);
}
//проверить карту
int pass=1234;
void cart(){

    // сброс цикла, если на считывателе нет карты
  if ( ! mfrc522.PICC_IsNewCardPresent()) { return; }
  if ( ! mfrc522.PICC_ReadCardSerial()) { return; }
  // вывод информации о карте на монитор порта
  cData=mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
  parol=12345678
  if (cData==parol){
    return True;
  }

}
void debug (long a) {
    Serial.println(a);
}          

void setup() {
    Serial.begin(9600);
  pinMode(13, OUTPUT);
  //-----------------
  servo1.attach(11);  // привязываем сервопривод к аналоговому выходу 11 [4](https://xn--18-6kcdusowgbt1a4b.xn--p1ai/%D1%81%D0%B5%D1%80%D0%B2%D0%BE%D0%BF%D1%80%D0%B8%D0%B2%D0%BE%D0%B4-%D0%B0%D1%80%D0%B4%D1%83%D0%B8%D0%BD%D0%BE/)

  //------------------
 void setup () {
  int s=0
}

int per=0;

//0-закрыт
//1-открыт
void loop() {
  //тригеры
  if (cart()==True){
    if (per==0){
      s=1;
      per=1;
      f=0;
    } else {
      s=2;
      per=0; 
      f=0;
    }
  }

  //реакции
  //0. ждет
  if s==0(){
    cart()
    
  } 
    //закрыто
  if s==1(){   
    if f==0 {
     zamokZakr();
     lamp(1);
     f=1;
   }
  }
//открыто
  if s==2(){   
    if f==0 {
     zamokOtkr();
     lamp(0)
     f=1;
  }

  if s==3(){
//разряжена
  }




} 
