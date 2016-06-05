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

void TimeUtils::showCurrentTime(){
  if (timeStatus() == timeSet) {
    TimeUtils::digitalClockDisplay();
  } else {
    Serial.println("The time has not been set.  Please run the Time");
    Serial.println("TimeRTCSet example, or DS1307RTC SetTime example.");
    Serial.println();
    delay(4000);
  }
  delay(1000);
}

void TimeUtils::digitalClockDisplay(){
  // digital clock display of the time
  Serial.print(hour());
  TimeUtils::printDigits(minute());
  TimeUtils::printDigits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print(" ");
  Serial.print(month());
  Serial.print(" ");
  Serial.print(year());
  Serial.println();
}

void TimeUtils::printDigits(int digits){
  // utility function for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
