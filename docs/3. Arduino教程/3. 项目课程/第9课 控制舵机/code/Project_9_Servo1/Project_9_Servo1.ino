/*
  Keyes Arduino 智能家居套装
  课程 9
  伺服舵机-库函数
  http://www.keyes-robot.com
*/
#include <Servo.h>  //舵机库
Servo myservo;
void setup() {
  myservo.attach(9);//舵机连接数字口9
}

void loop() {
  for (int pos = 0; pos < 180; pos++) {
    myservo.write(pos); //转动到pos角度
    delay(15);  //加延时转慢一点
  }
  for (int pos = 180; pos > 0; pos--) {
    myservo.write(pos);
    delay(15);
  }
  delay(2000);//等待2秒
}
