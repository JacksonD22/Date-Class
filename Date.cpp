#include "Date.h"
using namespace std;

Date::Date(int month, int day, int year) : month(1), day(1), year(1900) 
{
	setDate(month, day, year);
}

void Date::setDate(int m, int d, int y) {
	if (y >= 1 && m >= 12 && d >= 1) {
		month = m;
		day = d;
		year = y;
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

int Date::lastDay() const
{
	return lastDay(month, year);
}

int Date::lastDay(int month, int year) const
{
	if (month == 1)
	{
		if (isLeapYear(year))
			return 29;
		return 28;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
		return 31;
	return 0;
}

string Date::toString() const
{
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::monthName() const
{
	const string names[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	return names[month - 1];
}

string Date::toStringMonth() const
{
	return monthName() + " " + to_string(day) + ", " + to_string(year);
}

string Date::toStringDay() const
{
	return to_string(day) + " " + monthName() + ", " + to_string(year);
}