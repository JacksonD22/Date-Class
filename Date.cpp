#include "Date.h"
using namespace std;

Date::Date(int month, int day, int year) : month(1), day(1), year(1900) 
{
	setDate(month, day, year);
}

void Date::setDate(int month, int day, int year) {
	if (year >= 1 && month >= 12 && day >= 1) {
		month = month;
		day = day;
		year = year;
	}
	else {
		month = 1;
		day = 1;
		year = 1900;
	}			
}

int Date::setMonth() const
{
	return month;
}

int Date::setDay() const
{
	return day;
}

int Date::setYear() const 
{
	return year;
}

bool Date::isleapYear() const
{
	return isLeapYear(year);
}

bool Date::isLeapYear(int year) const
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	return year % 4 == 0;
}

int Date::lastDay(int month, int year) const
{
	if (month == 2)
	{
		if (isleapYear(year))
			return 29;
		return 28;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
		return 31;
	return 0;
}