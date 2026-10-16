#include <iostream>
using namespace std;
int main()
{
	int D1, D2, M1, M2, Y1, Y2,Date1,Date2,Age;
	cout << "This program calculates the age of a person based on two dates." << endl;
	cout << "Please enter the first date (day, month, year) and the second date (day, month, year)." << endl;
	cout << "For example, if the first date is 1st January 2000, enter 1 1 2000." << endl;
	cout << "Enter the day of the first date: ";
	cin >> D1;
	cout << "Enter the month of the first date: ";
	cin >> M1;
	cout << "Enter the year of the first date: ";
	cin >> Y1;
	cout << "Enter the day of the second date: ";
	cin >> D2;
	cout << "Enter the month of the second date: ";
	cin >> M2;
	cout << "Enter the year of the second date: ";
	cin >> Y2;
	Date1 = Y1 * 10000 + M1 * 100 + D1;
	Date2 = Y2 * 10000 + M2 * 100 + D2;
	Age = (Date2 - Date1) / 10000;
	cout << "this is the age: " << endl;
	cout << Age;

	return 0;

}