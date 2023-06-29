#include <Keyboard.h>

void setup() {
    Keyboard.begin();
    delay(5000);
    setupCB();
}

void loop() {
    
}

void setupCB(){
  Keyboard.print("**WiFi Password**");
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(15000);
  
  //Agree to TOS:
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(15000);
  
  //Enterprise Enrollment
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
  delay(10000);

  //Username and password
  Keyboard.print("EMAIL ADDRESS TO ENROLL");
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(5000);
  Keyboard.print("EMAIL PASSWORD");
  delay(500);
  Keyboard.write(KEY_RETURN);
  delay(5000);
}
