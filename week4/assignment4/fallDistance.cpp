/*********************************************************************
** Author: James G Wilson
** Date: 10/18/2016
** Description: Assignment 4 CS 161 Project 4.a
*********************************************************************/
// This program uses the kinematic equation for an object in free-fall
// to determine the fall distance in meters given time in seconds.
// It utilizes a function other than main.
#include <iostream>

// Using the pow function
#include <cmath>

/*

// Function prototype included because definition is after main
double fallDistance(double seconds);

int main()
{
	// Define variables 
	double time;

	// Describe program to user
	std::cout << "This program calculates the distance in\n"; 
	std::cout << "meters an object in free-fall travels given";
	std::cout << " time in seconds.\n";

	// Get input
	std::cout << "\nEnter a time in seconds: ";
	std::cin >> time;
	
	std::cout << "\nThe object traveled "; 

	// Call function here
	std::cout << fallDistance(time) << " meters.\n";
	

	return 0;
}

*/

/*********************************************************************
** Description: Given time in seconds the distance traveled in free-
** fall is calculated using a kinematic equation.
*********************************************************************/
// Function header is as follows
double fallDistance(double t)
{
	// Define variables
	double d,
	       g = 9.8;

	// Return distance traveled d from free fall formula
	return d = 0.5 * g * pow(t, 2.0);
}
	
