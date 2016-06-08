#ifndef TimeRange_h
#define TimeRange_h
#include "Arduino.h"

class TimeRange {
  public:
    TimeRange(unsigned long timeStart, unsigned long timeEnd);
    unsigned long getTimeStart();
    unsigned long getTimeEnd();
  private:
    unsigned long _timeStart;
    unsigned long _timeEnd;
};
#endif
