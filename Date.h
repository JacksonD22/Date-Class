#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
private: 
	int day;
	int month;
	int year;
	string monthName() const;
public:
	Date(int month = 1, int day = 1, int year = 1900);
	void setDate(int month, int day, int year);
	int setDay() const;
	int setMonth() const;
	int setYear() const;
	bool isleapYear() const;
	bool isLeapYear(int year) const;
	int lastDay() const;
	int lastDay(int month, int year) const;
};


#endif 
