/*
 * Talos Electronics 
 */
 
#include <LiquidCrystal_I2C.h> // Libreria del I2C

LiquidCrystal_I2C lcd(0x27,16,2); // Si no inicia puedes intentar con(0x3f,16,2) ||(0x20,16,2) 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("     TALOS     ");  //mensaje a escribir en primera linea
  lcd.setCursor (0,1);
  lcd.print("  ELECTRONICS  "); //mensaje a escribir en la segunda linea
}

void loop() { 
 
  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
}
