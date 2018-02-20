#include <LiquidCrystal.h>
const int nRows=2;
const int ncols=16;
LiquidCrystal lcd(12,11,3,4,5,2);
const char hello="Hello World";
const int len=sizeof(hello)-1;
void setup() {
  lcd.begin(ncols,nRows);
  lcd.print(hello);
}

void loop() {
lcd.setCursor(0,1);
for (int i=0;i<len;i++){
  lcd.scrollDisplayRight();
delay(30);
}
for(int k=0;k<len;k++){
   lcd.scrollDisplayLeft();
delay(30);
  
  }
}
