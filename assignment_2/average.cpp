/*********************************************************************
** Author:Romano Garza
** Date:01/17/2017
** Description:A program that asks the user for five numbers and then
prints out the average of those numbers
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, num5, avg;

	cout << "Please enter five numbers.\n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << num5 << endl;

	avg =(num1+num2+num3+num4+num5)/5;

	cout << "The average of those number is:\n" ;
	cout << avg;
	return 0;
}
