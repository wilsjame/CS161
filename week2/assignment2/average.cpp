/*********************************************************************
** Author: James G Wilson
** Date: 10/5/2016
** Description: Assignment 2 Project 2.a CS 161
*********************************************************************/
// This program calculates the average value of five numbers.
#include <iostream>

int main()
{
	double number1,
	       number2,
	       number3,
	       number4,
	       number5,
	       average;
	
	// Get inputs
	std::cout << "Please enter five numbers.\n";
	std::cin >> number1; 
	std::cin >> number2;
	std::cin >> number3; 
	std::cin >> number4;
	std::cin >> number5;
	
	// Perform calculation
	average = (number1 + number2 + number3 + number4 + number5) / 5;
	
	// Display output
	std::cout << "The average of those numbers is:\n";
	std::cout << average << std::endl;
	

	return 0;
}
