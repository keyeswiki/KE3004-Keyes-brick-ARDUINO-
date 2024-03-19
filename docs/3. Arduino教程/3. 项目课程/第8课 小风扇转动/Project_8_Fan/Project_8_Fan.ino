/*
  Keyes Arduino 智能家居套装
  课程 8
  小风扇转动
  http://www.keyes-robot.com
*/
//定义电机的两个管脚接口，分别为6、7
int INA = 6;
int INB = 7;
void setup() {
  //设置电机引脚为输出
  pinMode(INA, OUTPUT);
  pinMode(INB, OUTPUT);
}

void loop() {
  //逆时针转
  digitalWrite(INA, HIGH);
  digitalWrite(INB, LOW);
  delay(2000);
  //停止
  digitalWrite(INA, LOW);
  digitalWrite(INB, LOW);
  delay(1000);
  //顺时针转
  digitalWrite(INA, LOW);
  digitalWrite(INB, HIGH);
  delay(2000);
  //停止
  digitalWrite(INA, LOW);
  digitalWrite(INB, LOW);
  delay(1000);

}
