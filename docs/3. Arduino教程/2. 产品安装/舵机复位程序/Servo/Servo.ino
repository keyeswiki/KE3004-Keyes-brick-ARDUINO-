/*
  Keyes Arduino 智能家居套装
  舵机复位程序
  http://www.keyes-robot.com
*/
int servo1Pin = 9;//舵机1的PIN
int servo2Pin = 10;//舵机2的PIN

void setup() {
  pinMode(servo1Pin, OUTPUT);//舵机1引脚设置为输出
  pinMode(servo2Pin, OUTPUT);//舵机2引脚设置为输出
}
void loop() {
  servopulse(servo1Pin, 0);//舵机1转动到0度
  delay(1000);//延时1秒
  servopulse(servo2Pin, 0);//舵机2转动到0度
  delay(1000);
}

void servopulse(int pin, int myangle) { //脉冲函数
  int pulsewidth = map(myangle, 0, 180, 500, 2500); //将角度映射到脉宽
  for (int i = 0; i < 5; i++) { //多输出几次脉冲
    digitalWrite(pin, HIGH);//将舵机接口电平至高
    delayMicroseconds(pulsewidth);//延时脉宽值的微秒数
    digitalWrite(pin, LOW);//将舵机接口电平至低
    delay(20 - pulsewidth / 1000);
  }
}
