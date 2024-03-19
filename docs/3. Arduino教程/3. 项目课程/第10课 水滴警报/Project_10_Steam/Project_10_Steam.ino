/*
  Keyes Arduino 智能家居套装
  课程10
  水滴报警器
  http://www.keyes-robot.com
*/
int val = 0;
void setup() {
  pinMode(3, OUTPUT);//无源蜂鸣器接D3
  Serial.begin(9600); //设置波特率为9600
}

void loop() {
  val = analogRead(A2);//读取水滴模拟值
  Serial.println(val);
  if (val > 700) {//模拟值大于800
    tone(3, 392);         //控制引脚3输出模拟值为262的脉冲
    delay(125);         //延迟125毫秒
    tone(3, 392);
    delay(125);
  }
  else {//否则蜂鸣器停止发声
    noTone(3);
  }

}
