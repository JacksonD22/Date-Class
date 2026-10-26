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
	cout << "Required" << endl;
	cout << "12/25/2021" << endl;
	cout << test2.toString() << endl; 
	cout << test2.toStringMonth() << endl;
	cout << test2.toStringDay() << endl; cout << endl;

	Date test3(3, 13, 2011);
	cout << "Random" << endl;
	cout << "3/13/2011" << endl;
	cout << test3.toString() << endl; 
	cout << test3.toStringMonth() << endl;
	cout << test3.toStringDay() << endl; cout << endl;

	Date test4(1, 31, 2000);
	cout << "Last day of month" << endl;
	cout << "1/31/2000" << endl;
	cout << test4.toString() << endl;
	cout << test4.toStringMonth() << endl;
	cout << test4.toStringDay() << endl; cout << endl;

	Date test5(1, 1, 2000);
	cout << "First day of month" << endl;
	cout << "1/1/2000" << endl;
	cout << test5.toString() << endl;
	cout << test5.toStringMonth() << endl;
	cout << test5.toStringDay() << endl; cout << endl;

	Date test6(2, 28, 2000);
	cout << "Leap year" << endl;
	cout << "2/28/2000" << endl;
	cout << test6.toString() << endl;
	cout << test6.toStringMonth() << endl;
	cout << test6.toStringDay() << endl; cout << endl;

	Date test7(2, 29, 2000);
	cout << "Leap year" << endl;
	cout << "2/29/2000" << endl;
	cout << test7.toString() << endl;
	cout << test7.toStringMonth() << endl;
	cout << test7.toStringDay() << endl; cout << endl;

	Date test8(2, 28, 2001);
	cout << "non-leap year" << endl;
	cout << "2/28/2001" << endl;
	cout << test8.toString() << endl;
	cout << test8.toStringMonth() << endl;
	cout << test8.toStringDay() << endl; cout << endl;
	
	Date test9(2, 29, 2001);
	cout << "non-leap year" << endl;
	cout << "1/1/1900" << endl;
	cout << test9.toString() << endl;
	cout << test9.toStringMonth() << endl;
	cout << test9.toStringDay() << endl; cout << endl;
}