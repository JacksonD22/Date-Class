#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date test1;
	cout << "Default" << endl;
	cout << "1/1/1900" << endl;
	cout << test1.toString() << endl; 
	cout << test1.toStringMonth() << endl; 
	cout << test1.toStringDay() << endl; cout << endl;

	Date test2(12, 25, 2021);
	cout << "Normal" << endl;
	cout << "12/25/2021" << endl;
	cout << test2.toString() << endl; 
	cout << test2.toStringMonth() << endl;
	cout << test2.toStringDay() << endl; cout << endl;

	Date test3(3, 13, 11);
	cout << "Random" << endl;
	cout << "3/13/2011" << endl;
	cout << test3.toString() << endl; 
	cout << test3.toStringMonth() << endl;
	cout << test3.toStringDay() << endl; cout << endl;
}