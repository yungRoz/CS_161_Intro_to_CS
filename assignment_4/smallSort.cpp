/*********************************************************************
** Author:Romano Garza
** Date:01/31/2017
** Description:A program that sorts 3 integers from smalles to largest
*********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

void smallSort(int &a, int &b, int &c)
{
/*********************************************************************
** Description: If a is larger than b, a gets is promoted-the value of 
** a is assigned to temp, the value of b is moved down to a and the 
** value of temp is assigned to b. If b is larger than c, b gets promoted
** the value of b is assigned to temp, the value of c is moved down to 
** b and the value of temp is assigned to c. Finally a and b have their
** values checked again in the event that they are changed this will 
** sort out the values to be demoted or promoted.
*********************************************************************/
    int temp;
    
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        temp = a;
       a = b;
        b = temp;
    }
}

/*int main()
{

    int a = 10;
    int b = 4;
    int c = 2;
    
    smallSort(a, b, c);
    cout << a << ", " << b << ", " << c << endl;

	return 0;
}
*/
