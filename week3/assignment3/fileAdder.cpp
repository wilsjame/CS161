/*********************************************************************
** Author: James G Wilson
** Date: 10/12/2016
** Description: Assignment 3 CS 161
*********************************************************************/
// This program adds together all the integers from a file and
// writes that sum to an output file called sum.txt
#include <iostream>
#include <string>

// Needed to use files
#include <fstream> 

int main()
{
	using std::ifstream;
	using std::ofstream;
	using std::string;
	
	string fileName;
	ifstream inputFile; 
	ofstream outputFile;

	double value,
	       sum = 0.0; 

	// Get file name
	std::cout << "This program adds together all the integers\n";
	std::cout << "from a file and writes that sum to an output file\n";
	std::cout << "called sum.txt." << std::endl;
	std::cout << "\nEnter file name: ";
	std::cin >> fileName;
	
	// Open the input file
	inputFile.open(fileName);

	// If the file successfully opened, process it
	if (inputFile) 
	{
		// Read integers from the file and sum them
		// Loop until the EOF is reached
		while (inputFile >> value) 
			sum += value;

		// Display sum 
		std::cout << "\nA sum of " << sum << " was written to sum.txt.\n";

	}
	
	// If the file does not open 
	else
		std::cout << "could not access file.\n"; 

	// Close input file
	inputFile.close();

	// Open output file and write data
	outputFile.open("sum.txt");
	outputFile << sum;

	// Close the file
	outputFile.close();
	

	return 0;
}

	
	






