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

