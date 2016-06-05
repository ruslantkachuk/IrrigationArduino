/**
 * TimeUtils
 * Synchronize time with DS3231 shield.
 */

#include <TimeLib.h>
#include <DS3232RTC.h>
#include <TimeUtils.h>

void TimeUtils::setupTimeUtils() {
  setSyncProvider(RTC.get);   // the function to get the time from the RTC
  if(timeStatus()!= timeSet)
     Serial.println("Unable to sync with the RTC");
  else
     Serial.println("RTC has set the system time");
}
