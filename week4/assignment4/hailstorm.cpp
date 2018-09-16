/*********************************************************************
** Author: James G Wilson
** Date: 10/18/2016
** Description: Assignment 4 CS 161 Project 4.c
*********************************************************************/
// This program uses a function called hailstorm.
#include <iostream>

/*
 
// Function prototype because definition is below main
int hailstorm(int somePositiveInt);

int main()
{
	int positiveInt;

	std::cout << "Enter some positive integer: ";
	std::cin >> positiveInt;

	// Call hailstorm function and display number of steps
	std::cout << "\n hailsstorm steps = ";
	std::cout << hailstorm(positiveInt) << std::endl;


	return 0;
}

*/

/*********************************************************************
** Description: Hailstorm reduces some positive integer to value of 
** one and returns the amount of steps it took.
*********************************************************************/
// Function header
int hailstorm(int positiveInt)
{
	// Initialize accumulator to zero
	int count = 0;

	// Check if positiveInt has reached a value of one
	while (positiveInt != 1) 
	{

		// Determine if positiveInt is odd
		if (positiveInt % 2 != 0)
		{

			// Mulitply by three and add one
			positiveInt = positiveInt * 3 + 1;

			// Increment counter
			count++;
		}

		// positiveInt is even
		else
		{

			// Divide by two
			positiveInt = positiveInt / 2.0;

			// Increment counter 
			count++;
		}
	}


	// Return the number of steps to reach a value of 1
	return count;
}
			

