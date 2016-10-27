#include <iostream>
#include <cstdlib>
#include "date.h"

using namespace std;

Date::Date()
{
    day = 25;
    month = 12;
    year = 2014;
}

Date::Date(int day, int month, int year)
{
    if (month > 0 && month < 13)
    {
        this->month = month;
    }else
    {
        exit(0);
    }

    if (day > 0 && day < 32)
    {
        this->day = day;
    }else
    {
        exit(0);
    }

    this->year = year;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}
