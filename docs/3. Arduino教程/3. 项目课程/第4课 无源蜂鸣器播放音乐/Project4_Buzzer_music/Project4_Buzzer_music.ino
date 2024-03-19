/*
  Keyes Arduino智能家居套装
  第4课 无源蜂鸣器
  http://www.keyes-robot.com
*/
void setup(){
  pinMode(3, OUTPUT);        //设置3为输出
}
void loop(){
  tone(3,392);          //控制引脚3输出模拟值为262的脉冲
  delay(125);         //延迟125毫秒   
  tone(3,392);
  delay(125);
  tone(3,440);
  delay(250);
  tone(3,392);
  delay(250);
  tone(3,532);
  delay(250);
  tone(3,494);
  delay(500);
  tone(3,392);
  delay(125);
  tone(3,392);
  delay(125);
  tone(3,440);
  delay(250);
  tone(3,392);
  delay(250);
  tone(3,587);
  delay(250);
  tone(3,532);
  delay(500);
  tone(3,392);
  delay(125);
  tone(3,392);
  delay(125);
  tone(3,784);
  delay(250);
  tone(3,659);
  delay(250);
  tone(3,532);
  delay(250);
  tone(3,494);
  delay(250);
  tone(3,440);
  delay(250);
  tone(3,392);
  delay(125);
  tone(3,392);
  delay(125);
  tone(3,330);
  delay(250);
  tone(3,262);
  delay(250);
  tone(3,587);
  delay(250);
  tone(3,532);
  delay(500);
}
