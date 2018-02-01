/*********************************************************************
** Author:Romano Garza
** Date:01/18/2017
** Description:A program that prompts the user to input a number and
** allows that user or another to guess the number.
*********************************************************************/
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
	int numToGuess, guessToCheck;
/*********************************************************************
** Description: User is prompted to enter a number for the player to
** guess
*********************************************************************/
	cout << "Enter the number for the player to guess.";
	cin >> numToGuess;
	cout << "Enter your guess." <<endl;
	cin >> 	guessToCheck;
/*********************************************************************
** Description:Count is initialized at 1 becuase the user has entered
** their first guess
*********************************************************************/
	int count = 1;
/*********************************************************************
** Description:While the users guess is not equal to the number to 
** guess, the user is given a clue about their error, allowed to input
** a new guess, and count is incremented 
**********************************************************************/

	while (guessToCheck != numToGuess)
		if (guessToCheck >= numToGuess)
		{
			count++;
			cout << "Too High - try again\n";
			cin >> guessToCheck;
					}	
		else if (guessToCheck <= numToGuess )
		{
			count++;	
			cout << "Too low - try again\n ";
			cin >>guessToCheck;				
		}
/*********************************************************************
** Description: If users guess matches the number to guess, the user
**is informed, and count is displayed to list the number of attempts it 
**took.
*********************************************************************/
	if (guessToCheck == numToGuess)
	{
		cout << "You guessed it in ";
		cout << count <<" tries.";
	}	

	return 0;
}
