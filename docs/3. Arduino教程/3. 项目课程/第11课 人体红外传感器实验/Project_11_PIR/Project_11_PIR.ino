/*
 Keyes  Arduino智能家居套装
 第11课
 人体红外传感器
 www.keyes-robot.com
*/

void setup () {
   Serial.begin (9600); // 波特率9600
   pinMode (3, INPUT); // 定义人体红外传感器引脚D2,并设置为输入模式
   pinMode (5, OUTPUT); // 定义LED引脚D5,并设置为输出模式
   pinMode (7, OUTPUT); // 定义小风扇INB引脚D7,并设置为输出模式
   pinMode (6, OUTPUT); // 定义小风扇INA引脚D6,并设置为输出模式
}

void loop () {
   Serial.println (digitalRead (3));
   delay (500); // 延时 500ms
   // 如果检测到有人，黄色LED灯点亮，小风扇转动
   if (digitalRead (3) == 1) 
  {
     digitalWrite (5, HIGH); 
     digitalWrite (7, HIGH);
     analogWrite (6,150); 

   } 
   else //否则黄色LED灯熄灭，小风扇停止转动
   {
     digitalWrite (5, LOW); 
     digitalWrite (7, LOW);
     analogWrite (6,0); 
   }
}
