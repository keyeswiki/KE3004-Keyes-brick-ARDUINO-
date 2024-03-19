/*
 Arduino 智能家居套装
 第12课 MQ2气体传感器
 www.keyes-robot.com
*/
int MQ2 = A0; // 在A0处定义MQ2气体传感器引脚
int val = 0; // 声明变量
int buzzer = 3; // 定义D3处的蜂鸣器引脚
void setup ()
{
pinMode (MQ2, INPUT); // MQ2气体传感器作为输入
Serial.begin (9600); // 将串行端口波特率设置为9600
pinMode (buzzer, OUTPUT); // 设置输出的数字IO引脚模式
}
void loop ()
{
val = analogRead (MQ2); //读取A0端口的电压值并将其分配给val
Serial.println (val); // 串口显示val值
if (val> 450)
{
tone (buzzer, 589);
delay(300);
}
else
{
noTone (buzzer);
}
}
