/*
  Keyes
  Blink
  www.keyes-robot.com
*/
int LED = 5;  //定义LED引脚
void setup() {
  pinMode(LED, OUTPUT);//设置引脚为输出
}

void loop() {
  digitalWrite(LED, HIGH);   // 点亮LED灯
  delay(1000);               // 延时1s
  digitalWrite(LED, LOW);    // 熄灭LED灯
  delay(1000);               // 延时1S
}
