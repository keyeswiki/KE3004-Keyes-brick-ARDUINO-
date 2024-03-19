/*
  keyes Aduino智能家居套装
  课程16
  蓝牙控制LED
  http://www.keyes-robot.com
*/
int ledpin = 5; //定义LED接口D5
void setup()
{
  Serial.begin(9600); //设置串口波特率为9600
  pinMode(ledpin, OUTPUT);//设置LED接口为输出模式
}
void loop()
{
  char val; //val为字符型
  while (Serial.available()>0)
  {
    val = Serial.read(); //读取蓝牙发送的值
    Serial.println(val);  //串行端口打印数值
    if (val == 'a')  //当数值等于a时点亮LED灯
    {
      digitalWrite(ledpin, HIGH);
    }
    if (val == 'b') //当数值等于b时熄灭LED灯
    {
      digitalWrite(ledpin, LOW);
    }
  }
}
