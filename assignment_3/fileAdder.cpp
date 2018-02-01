/*********************************************************************
** Author:Romano Garza
** Date:01/18/2017
** Description:A program that reads and sums the values in a data file
** then writes that sum in an output file sum.txt
*********************************************************************/
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
/*********************************************************************
** Description:The data type for the file to be read must be ifstream,
** the data type of for the file to be written must be ofstream.
*********************************************************************/
	ifstream inputFile;
	ofstream outputFile;
	string fileName;
	int numValues = 0;
	int value,
	    total = 0.0;
/*********************************************************************
** Description:User inputs file name stored in the variable fileName as
** a string
*********************************************************************/
	cout << "This program reads and sums the values in a data file.\n";
	cout << "Enter the name of the file to read from: ";
	cin >> fileName;
    
/*********************************************************************
** Description:File is opened.
*********************************************************************/
	inputFile.open(fileName);

/*********************************************************************
** Description:If file opens correctly, values are read and assigned to
** a running total. Then the file is closed. Else, an error message is
** sent out about how the file did not open
*********************************************************************/
	if (inputFile)
	{
		while (inputFile >> value)
		{	numValues++;
			total += value;
		}
		inputFile.close();

	}

	else
	{
		cout<< "could not access file.\n";
	}
/*********************************************************************
** Description:Specific output file sum.txt is opened
*********************************************************************/
	outputFile.open("sum.txt");
/*********************************************************************
** Description:If is is successfully opened then the total value is
** written to sum.txt. Else, an error missage is sent out.
*********************************************************************/
	if (outputFile)
	{
		outputFile << total;
		outputFile.close();
	}
	else
	{
		cout<< "could not access the file sum.txt\n";
	}
	return 0;
}
	
