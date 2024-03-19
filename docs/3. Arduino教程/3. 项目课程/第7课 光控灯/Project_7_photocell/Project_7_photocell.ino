/*
  Keyes Arduino 智能家居套装
  课程 7
  光控灯
  http://www.keyes-robot.com
*/
int LED = 5; // 定义LED引脚D5
int val = 0; 
void setup () {
       pinMode (LED, OUTPUT); //设置模式为输出
       Serial.begin (9600); // 设置波特率为9600
}
void loop () {
       val = analogRead (A1); // 读取光敏传感器数值
       Serial.println (val); // 串口显示光敏传感器读取到的数值
       if (val <300)
       {// 当数值小于300时，点亮LED灯
       digitalWrite (LED, HIGH);
       } 
       else 
       {//否则熄灭LED灯
       digitalWrite (LED, LOW);
       }
       delay (10); // 延时10ms
} 
