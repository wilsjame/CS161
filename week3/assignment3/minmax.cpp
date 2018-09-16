/*********************************************************************
** Author: James G Wilson
** Date: 10/12/2016
** Description: Assignment 3 CS 161
*********************************************************************/
// This program calculates and displays the minimum and maximum value
// of one or more user inputted integers.
#include <iostream>

int main()
{
	int numInt,
	    input,
	    min,
	    max;

	// Get number of integers
	std::cout << "How many integers would you like to enter?\n";
	std::cin >> numInt; 

	// If user entered one integer,
	// it is both the maximum and minimum value 
	if (numInt == 1)
	{   
		std::cout << "Please enter 1 integer.\n";
		std::cin >> input;
		min = input;
		max = input;
	}

	// If the user entered more than one integer,
	// get first input and set it equal to  the   
	// minimum and maximum value
	else 
	{
		std::cout << "Please enter " << numInt << " integers.\n";
		std::cin >> input;
		min = input;
		max = input;
		
		// Get subsequent inputs
		for (int count = 1; count <= numInt - 1; count++)
		{
			std::cin >> input;

			// Compare input with maximum and minimum values
			// and update if necessary
			if (input > max)
				max = input;
			else if (input < min)
				min = input;
		}
	}	

	// Display output
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;

	
	return 0;
}	

	
	
