/*
  Keyes Arduino智能家居套装
  第二课 呼吸灯
  www.keyes-robot.com
*/
int ledPin = 5; //定义LED引脚
void setup () {
      pinMode (ledPin, OUTPUT); // 设置引脚为输出模式
}
void loop () {
for (int value = 0; value<255; value = value + 1) {  //从0到255，每次加1
     analogWrite (ledPin, value); 
     delay (5); // 延时 5MS
   }
   for (int value = 255; value>0; value = value-1) { //从0到255，每次减1
     analogWrite (ledPin, value); 
     delay (5); // 延时 5MS
   }}
