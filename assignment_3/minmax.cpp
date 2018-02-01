/*********************************************************************
** Author:Romano Garza
** Date:01/18/2017
** Description:A program that prompts a user for the number of integer 
** they would like to enter, then for the value of those integers. 
** Lastly, the maximum and minimum values of the entered integerss are 
** displayed. 
*********************************************************************/
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
	
	int finalValue, number;

/*********************************************************************
** Description: User is prompted to enter a number greater than 0 for
** how many integers they wish to enter.
*********************************************************************/
	cout << "How many integers would you like to enter? \n";
	cin >> finalValue;

    cout << "Please enter " << finalValue << " integers.\n";
    int max = 0;
    int min = 0;

/*********************************************************************
** Description: The initial user entered number is assigned to both
** variable max and min. All other numbers are compared to the max and 
** min and take over the variables assignment value.
*********************************************************************/
    for (int count = 1; count <= finalValue; count++)
    {
        cin >> number;
        if (count == 1)
        {
            max = number;
            min = number;
        }
        else if (number >= max)
            max = number;
        else if (number <= min)
            min = number;			
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

	
	return 0;
}
