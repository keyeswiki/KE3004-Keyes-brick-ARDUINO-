/*
  Keyes Arduino 智能家居套装
  课程6
  按键控制RGB灯
  http://www.keyes-robot.com
*/
#include <Wire.h>
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel  rgb_display(8);  //定义一个像素的类
int inpin = 4; //定义按键的管脚接数字口4
int val = 0; 

void setup ()
{
  rgb_display.begin();  //启动6812RGB
  rgb_display.setPin(13);  //设置6812管脚接数字口13
  rgb_display.setBrightness(100); //设置亮度为100，范围为0~255
  pinMode (inpin, INPUT); // 按键的管脚接数字口4并设置为输入模式
}
void loop ()
{
  val = digitalRead (inpin); // 读取按键值
  if (val == LOW) //按键按下时
  {
    rgb_display.setPixelColor(0, 255, 0, 0); //第一颗灯珠亮红色
    rgb_display.setPixelColor(1, 0, 255, 0); //第二颗灯珠亮绿色
    rgb_display.setPixelColor(2, 0, 0, 255); //第三颗灯珠亮蓝色
    rgb_display.setPixelColor(3, 255, 255, 255); //第四颗灯珠亮白色
    rgb_display.show(); //显示灯珠颜色
  }
  else
  {
    rgb_display.setPixelColor(0, 0, 0, 0); //第一颗灯珠亮红色
    rgb_display.setPixelColor(1, 0, 0, 0); //第二颗灯珠亮绿色
    rgb_display.setPixelColor(2, 0, 0, 0); //第三颗灯珠亮蓝色
    rgb_display.setPixelColor(3, 0, 0, 0); //第三颗灯珠亮蓝色
    rgb_display.show();
  }
}
