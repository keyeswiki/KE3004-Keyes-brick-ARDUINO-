/*
  Keyes Arduino 智能家居套装
  课程 15
  温湿度表
  http://www.keyes-robot.com
*/
#include <dht11.h>  //include the library code:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2); //16个字符和2行显示，LCD IIC地址为0x27
dht11 DHT;
#define DHT11_PIN 12 //定义DHT11为数子口12

void setup() {
  lcd.init (); //初始化
  lcd.backlight ();//LCD清屏
  Serial.begin(9600);
}
void loop() {
  int chk;
  chk = DHT.read(DHT11_PIN);    // READ DATA
  switch (chk) {
    case DHTLIB_OK:
      break;
    case DHTLIB_ERROR_CHECKSUM: //校检和错误返回
      break;
    case DHTLIB_ERROR_TIMEOUT: //超时错误返回
      break;
    default:
      break;
  }
  // DISPLAT DATA
  lcd.setCursor (0, 0);
  lcd.print ("humidity:   %");
  lcd.setCursor (0, 1);
  lcd.print ("temperature:  C");
  lcd.setCursor (10, 0);
  lcd.print (DHT.humidity);//第一行显示湿度
  lcd.setCursor (12, 1);
  lcd.print (DHT.temperature);//第二行显示温度
  Serial.print("humidity:");
  Serial.print(DHT.humidity);
  Serial.print("   temperature:");
  Serial.println(DHT.temperature);
  delay(200);
}
