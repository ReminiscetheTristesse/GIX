#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);  //定义脚位
int numb;
void setup()
{
  lcd.begin(16,2); //设置LCD显示的数目。16 X 2：16格2行。
  lcd.print("hello,world!"); //将hello,world!显示在LCD上
  Serial.begin(9600);
  analogWrite(6,150);
}
void loop()
{
  lcd.setCursor(0,1);  //将闪烁的光标设置到column 0, line 1 (注释：从0开始数起，line 0是显示第一行，line 1是第二行。)
  lcd.print(millis()/1000); //开机后屏幕现实以秒几时的时间
numb=analogRead(A0);
if (millis()%1000==0)
{//Serial.println(millis());
Serial.println(numb);}
}
//contrast=150

