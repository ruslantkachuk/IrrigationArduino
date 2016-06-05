/**
 *
 */
#include "Arduino.h"
#include "TimeUtils.h"

void setup() {
  Serial.begin(9600);
  TimeUtils::setupTimeUtils();
}

void loop() {
  TimeUtils::showCurrentTime();
}
