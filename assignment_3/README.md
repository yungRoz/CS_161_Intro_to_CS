#### Project 3.a ####

Write a program that asks the user how many integers they would like to enter.  You can assume they will enter a number >= 1.  The program will then prompt the user to enter that many integers.  After all the numbers have been entered, the program should display the largest and smallest of those numbers (no, you cannot use arrays, or any other material we haven't covered).  When you run your program it should match the following format:

`How many integers would you like to enter?
4
Please enter 4 integers.
-4
105
2
-7
min: -7
max: 105`
The file must be named: minmax.cpp.

 

#### Project 3.b ####

Write a program that prompts the user for the name of a file and then tries to open it. If the input file is there and can be opened, the program should read the list of integers in the file, which will have one integer per line as in the following example:

`14
9
12
-6
-30
8
109`
Note: This example is just to demonstrate the format of the input file. Your program would not print these values out to the console or to the output file.

The program will then add together all the integers in the file, create an output file called sum.txt, and write the sum to that file (just that number - no additional text).  Remember to close both the input and output files.    If the input file is not there (or is there but couldn't be opened for some reason), the program should just print out "could not access file".

Using a string variable as the parameter of the open function is a C++11 feature, so to compile, you'll need the "-std=c++0x" flag as discussed in the section "Note about different C++ standards".

The file must be named: __fileAdder.cpp__

 

#### Project 3.c ####

Write a program that prompts the user for an integer that the player (maybe the user, maybe someone else) will try to guess.  If the player's guess is higher than the target number, the program should display "too high"  If the user's guess is lower than the target number, the program should display "too low"  The program should use a loop that repeats until the user correctly guesses the number.  Then the program should print how many guesses it took.  When you run your program it should match the following format:

`Enter the number for the player to guess.
-12
Enter your guess.
100
Too high - try again.
50
Too high - try again.
-2000
Too low - try again.
-12
You guessed it in 4 tries.`
The file must be named: __numGuess.cpp__


