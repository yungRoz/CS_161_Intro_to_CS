/*********************************************************************
** Author:Romano Garza
** Date:01/18/2017
** Description:A program that asks the user for an integer number of 
cents from 0 to 99, and outputs how many of each 
*********************************************************************/
#include <iostream>
using namespace std;

int main ()
{
	int usrAmnt, usrAmnt2, usrAmnt3, usrAmnt4,
	    qrt, dm, nck, pn;

/*********************************************************************
** Description: User is prompted to enter a number from 0-99, input 
** input is stored in usrAmnt. 
*********************************************************************/	
	cout << "Please enter an amount in cents less than a dollar.";
	cin >> usrAmnt;
	
/*********************************************************************
** Description: Number of quarters making up the value of the user input
** is determined by dividing usrAmnt by quarter value. The remainder is 
** stored in a subsequent variable. The process is repeated for dimes,
** nickels, and pennies. 
*********************************************************************/
	qrt = usrAmnt / 25;
	usrAmnt2 = usrAmnt % 25;

	dm = usrAmnt2 / 10;
	usrAmnt3 = usrAmnt2 % 10;

	nck = usrAmnt3 / 5;
	usrAmnt4 = usrAmnt3 % 5;

	pn = usrAmnt4 / 1;	cout << "Your change will be: " << endl;
	cout << "Q: " << qrt << endl;
	cout << "D: " << dm << endl;
	cout << "N: " << nck << endl;
	cout << "P: " << pn << endl;
	cout << endl;
	return 0;
} 
