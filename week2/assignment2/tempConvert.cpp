/*********************************************************************
** Author: James G Wilson
** Date: 10/5/2016
** Description: Assignment 2 Project 2.b CS 161
*********************************************************************/
// This program converts Celsius temperatures to Fahrenheit temperatures.
#include <iostream>

int main()
{
	double celsiusTemp,
	       fahrenheitTemp;
	
	// Get inputs
	std::cout << "Please enter a Celsius temperature.\n";	
	std::cin >> celsiusTemp;
	
	// Perform calculation
	fahrenheitTemp = (9.0 / 5.0) * celsiusTemp + 32;
	
	// Display output
	std::cout << "The equivalent Fahrenheit temperature is:\n";
	std::cout << fahrenheitTemp << std::endl;


	return 0;
}


