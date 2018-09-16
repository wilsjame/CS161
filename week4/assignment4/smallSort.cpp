/*********************************************************************
** Author: James G Wilson
** Date: 10/18/2016
** Description: Assignment 4 CS 161 Project 4.b
*********************************************************************/
// This program uses a function that takes three parameters by
// reference and sorts their values into ascending order.
#include <iostream>

/*
 
// Function prototype because definition is after main
void smallSort(int& value1, int& value2, int& value3);


int main()
{
	int a = -1,
	    b = 0,
	    c = -1;

	// Call function smallSort
	smallSort(a, b, c);

	// Display variables
	std::cout << a << ", " << b << ", " << c << std::endl;


	return 0;
}

*/

/*********************************************************************
** Description: The function smallSort takes three parameters by
** reference and sorts them into ascending order.
*********************************************************************/
// Function header is as follows
void smallSort(int& value1, int& value2, int& value3)
{
	// Define variable temp used for swapping values
	int temp;

	// Begin do-while loop
	do
	{
		// Compare value1 with value 2 
		// swap if value1 is greater
		if (value1 > value2)
		{
			temp = value1;
			value1 = value2;
			value2 = temp;
		}
		// Compare value1 and value3
		// swap if value1 is greater
		else if (value1 > value3)
		{
			temp = value1;
			value1 = value3;
			value3 = temp;
		}
		// Trailing else swaps value2 and value3
		else 
		{
			temp = value2;
			value2 = value3;
			value3 = temp;
		}

	// Repeat do-while loop if value3 is less than value2
	} while (value3 < value2);
}







