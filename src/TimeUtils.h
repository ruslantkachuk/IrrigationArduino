#ifndef TimeUtils_h
#define TimeUtils_h

#include "Arduino.h"
#include <TimeRange.h>

class TimeUtils {
  public:
    static void setupTimeUtils();
    static void showCurrentTime();
    static void digitalClockDisplay();
    static void printDigits(int);
    static boolean isCurrentTimeInRange(TimeRange timeRange);
};

#endif
