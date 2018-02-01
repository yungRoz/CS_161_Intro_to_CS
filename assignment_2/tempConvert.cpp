/*********************************************************************
** Author:Romano Garza
** Date:01/18/2017
** Description:A program that converts Celsius temperature to Fahrenheit
*********************************************************************/

#include <iostream>
using namespace std;

int main ()
{
	float cTemp, fTemp;

/*********************************************************************
** Description: User is prompted to enter C temperature, user input
** is stored in variable cTemp
*********************************************************************/
	cout << "Please enter a Celsius temperature.";
	cin >> cTemp;

/*********************************************************************
** Description: C temperature is converted to F using conv. equation.
*********************************************************************/
	fTemp =(cTemp*9/5) + 32;

/*********************************************************************
** Description: Corresponding F temperature is displayed
*********************************************************************/
	cout << "The equivalent Fahrenheit temperature is: " << endl;
	cout << fTemp << endl;
	return 0;
}

