/**
 *
 */
#include "Arduino.h"
#include "TimeUtils.h"

unsigned int i=32767;
void setup() {
  Serial.begin(9600);
  TimeUtils::setupTimeUtils();
}

void loop() {
  TimeUtils::showCurrentTime();
}
