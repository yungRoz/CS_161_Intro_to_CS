/*********************************************************************
 ** Author: Romano Garza
 ** Date: 01/12/17
 ** Description: Program prompts user to input favorite animal,
 stores user input in a programmer-defined identifier, and
 returns a sentence containing the user input
 *********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
