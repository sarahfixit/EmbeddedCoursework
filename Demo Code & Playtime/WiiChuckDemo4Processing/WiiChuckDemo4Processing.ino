#include "Wire.h"
//#include "WiiChuckClass.h" //most likely its WiiChuck.h for the rest of us.
#include "WiiChuck.h" //joystick based
//#include "WiiChuck1.h"  //"WiiChuck1.h" is an alternate library

WiiChuck chuck = WiiChuck();

void setup() {
  //nunchuck_init();
  Serial.begin(115200);
  chuck.begin();
  chuck.update();
  //chuck.calibrateJoy();
}

void loop() {
  delay(20);
  chuck.update(); 

  Serial.print(chuck.readJoyX());
    Serial.print(" ");  
  Serial.print(chuck.readJoyY());
    Serial.print(" ");  

  if (chuck.buttonZ) {
     Serial.print("1");
  } else  {
     Serial.print("0");
  }

   Serial.println();
}



