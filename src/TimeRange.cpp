/**
 * TimeRange
 * Class entity
 */
#include <TimeRange.h>

TimeRange::TimeRange(unsigned long timeStart, unsigned long timeEnd){
 _timeStart = timeStart;
 _timeEnd = timeEnd;
}

unsigned long TimeRange::getTimeStart(){
  return _timeStart;
}

unsigned long TimeRange::getTimeEnd(){
  return _timeEnd;
}
