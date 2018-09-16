/*********************************************************************
** Author: James G Wilson
** Date: 10/25/2016
** Description: Assignment 5 CS 161 Project 5.a main method
*********************************************************************/
#include <iostream> 

// Include header (class decleration) file
#include "Box.hpp"


/*********************************************************************
** Description: Main method for testing implementation and interface
** files.
*********************************************************************/
int main()
{

	// Define two Box objects
	// Define box1 with default parameters
	// Define box2 with default contructor
	Box box1(2.4, 7.1, 5.0),
	    box2;

	// Test box1 
	std::cout << "The volume of box1 is: ";
	std::cout << box1.getVolume() << std::endl;
	
	std::cout << "The surface area of box1 is: ";
	std::cout << box1.getSurfaceArea() << std::endl;

	// Test box2 
	std::cout << "The volume of box2 is: ";
	std::cout << box2.getVolume() << std::endl;

	std::cout << "The surface area of box2 is: ";
	std::cout << box2.getSurfaceArea() << std::endl;


	return 0;
}
		
