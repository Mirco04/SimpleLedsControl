#include <Led.h>

Led led1;
Led led2;
Led led3;

void setup() {
led1.Setup(4); //Setup and attach the object "led1" to a pin (GPIO 4 in this case)
led2.Setup(0); //Setup and attach the object "led2" to a pin (GPIO 0 in this case)
led3.Setup(2); //Setup and attach the object "led3" to a pin (GPIO 2 in this case)
}


void loop() {

  led1.turnON(); //Turn led1 ON
  delay(440);
  led1.turnOFF(); //Turn led1 OFF
  delay(440);

  led2.turnON(); //Turn led2 ON
  delay(440);
  led2.turnOFF(); //Turn led2 OFF
  delay(440);

  led3.turnON(); //Turn led3 ON
  delay(440);
  led3.turnOFF(); //Turn led3 OFF
  delay(440);


  
}