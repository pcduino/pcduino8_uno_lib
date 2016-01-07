#include <core.h>

void setup() {
//Initialize serial with baudrate setting, the default config is SERIAL_8N1
  int rate = 115200;
  Serial.begin(rate);
  //you will see the string on the terminal
  Serial.println("Serial begin: ");
}

void loop() {
  //if you type the character in the terminal, available() will return the size you typed
  if (Serial.available() > 0) {
    // read the incoming byte:
    char thisByte = Serial.read();
    //print it on the terminal with DEC format
    Serial.print("I received: ");
    Serial.println(thisByte, DEC);
  }

  delay(200);
}

