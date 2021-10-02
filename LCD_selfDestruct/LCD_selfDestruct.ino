// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int RS = 12, E = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(4, 0);
  
  // Print a message to the LCD.
  lcd.print("seconds till");

  lcd.setCursor (0, 1);

  lcd.print ("self destruct!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // print the number of seconds left on timer:
  for (int thisChar = 9; thisChar > 0; thisChar--) 
  {
    lcd.print(thisChar);
    delay(1000);
  }
  lcd.clear();
}
