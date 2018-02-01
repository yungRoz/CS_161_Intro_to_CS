/*********************************************************************
** Author:Romano Garza
** Date:01/31/2017
** Description:A program that takes a number and prints how many steps
** it takes to get to 1 using a hailstone sequence.
*********************************************************************/
#include <iostream>
#include <cmath>

using namespace std;


/*********************************************************************
** Description: The function takes a number with count initially 0. 
** While the number is not equal to 1, if the number is divisible by 2,
** then is gets divided by 2 and the result is stored, +1 to count. If
** the number wasn't divisible by 2 it gets multipied by 3 and the 
** result is stored, +1 to count. The stored result goes through the 
** if/else if statements until it is equal to 1 at which point counts
** final value is returned to main function
*********************************************************************/

int hailstone(int num)
{
    int count = 0;
    while (num != 1)
    {
        if (!(num%2))
        {
            num /= 2;
            count++ ;
        }
        else if (num%2)
        {
            num = (num*3) + 1;
            count++ ;
        }
    }
    return count;
}

    
/*
 int main()
{
    int number,
        count;

    cout << "\n Enter an integer value to perform hailstone on..\n";
    cin >> number;
    count = hailstone(number);
    
    cout << "Easy enough!\n" << "it took " << count << " steps!\n";
    
    return 0;
}
*/
 
