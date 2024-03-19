/*
 Arduino 智能家居套装
 第14课 
 1602 LCD显示
 www.keyes-robot.com
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2); //16个字符和2行显示，LCD IIC地址为0x27
void setup ()
{
lcd.init (); //初始化
lcd.backlight ();//LCD清屏
//在（2，1）的位置显示Hello, world!
lcd.setCursor (2,1);
lcd.print ("Hello, world!");
//在（5，0）的位置显示keyes!
lcd.setCursor (5,0);
lcd.print ("keyes");
}
void loop ()
{
}
