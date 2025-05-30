/*
  Keyes Arduino 智能家居套装
  课程 9
  伺服舵机-2
  http://www.keyes-robot.com
*/
int servoPin = 9;//舵机的PIN

void setup() {
  pinMode(servoPin, OUTPUT);//舵机引脚设置为输出
}
void loop() {
  servopulse(servoPin, 0);//转动到0度
  delay(1000);//延时1秒
  servopulse(servoPin, 90);//转动到90度
  delay(1000);
  servopulse(servoPin, 180);//转动到180度
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
