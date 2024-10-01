#include <leapyear.h>

bool isLeapYear(int year)
{
    if(year <= 0) return false;

    bool divby4 = (year % 4 == 0);

    bool divby400 (year % 400 == 0);

    bool divby100 (year % 100 == 0);

    bool leapyear = (divby4 && !divby100) || divby400;

    return leapyear;
}