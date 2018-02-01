/*********************************************************************
** Author:Romano Garza
** Date:01/31/2017
** Description:A program that determins the distance an object falls 
 due to gravity
*******************************************************************/
#include <iostream>
using namespace std;


/*********************************************************************
 ** Description: fallDistance- this function uses the parameter fall time
 ** to determine fall distance of the object due to gravity.
 *********************************************************************/

double fallDistance(double userTime)
{
    const double grav = 9.8;
/*********************************************************************
** Description: the equation for distance an object falls due to
gravity is d = (1/2)gt^2 where g is 9.8 and t is time
*********************************************************************/
    return grav * userTime * userTime * (0.5);
}


/*
 int main ()
{
	double fallTime,
            fallDist;
	cout << "Please enter how long the object has fallen in seconds ";
	cin >> fallTime;
    fallDist = fallDistance(fallTime);
 
    cout << "The fall distance for " << fallTime << "s is " << fallDist;
    cout << "m" << endl;
    return 0;
}
*/






