#include "Arduino_LED_Matrix.h"
#include "jrg.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);
  matrix.begin();                 
}

void loop() {
  matrix.loadSequence(jrg);
  matrix.play(true);
}
