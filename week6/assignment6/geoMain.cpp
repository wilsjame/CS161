/*********************************************************************
** Author: James G Wilson
** Date: 10/28/2016
** Description: Assignment 6 CS 161
** Main method to test Point and LineSegment classes
** geoMain.cpp
*********************************************************************/
#include <iostream>

// Include LineSegment header file that includes Point header file 
// as well.
#include "LineSegment.hpp" 

int main()
{
 	
	// Define Point objects
	Point p1,
	      p2;

	// Define LineSegment objects with contructor
	LineSegment ls1(p1, p2),
		    ls2(p2, p1);

	// Define points for user input
	double x1,
	       x2,
	       y1,
	       y2;

	char again;
	
	// Loop until user ends program
	do
	{

		// Get inputs for point1
		std::cout << "Enter the X and Y coordinates for ";
		std::cout << "point 1.\n";
		std::cout << "Enter X: "; 

		std::cin >> x1;

		std::cout << "Enter Y: ";

		std::cin >> y1;

		// Send user inputs for point 1 to p1 object
		p1.setXcoord(x1);
		p1.setYcoord(y1);

		// Get inputs for point2
		std::cout << "Enter the X and Y coordinates for ";
		std::cout << "point 2.\n";
		std::cout << "X: ";

		std::cin >> x2;

		std::cout << "Enter Y: ";

		std::cin >> y2;

		// Send user inputs for point 2 to p2 object
		p2.setXcoord(x2);
		p2.setYcoord(y2);

		// Return distance between the two points
		std::cout << "The distance between the two points ";
		std::cout << "is: ";

		std::cout << p1.distanceTo(p2) << std::endl;
		
		// Now to test the length method from 
		// the LineSegment class
		std::cout << "The distance between the two points ";
		std::cout << "is: ";

		// Call length method from LineSegment class
		std::cout << ls1.length();
		std::cout << " and ";
		std::cout << ls2.length();
		std::cout << std::endl;

		// Now test the slope method from the 
		// LineSegment class
		std::cout << "The slope between p1 and p2 is: ";
		std::cout << ls1.slope() << std::endl;

		std::cout << "The slope between p2 and p1 is: ";
		std::cout << ls2.slope() << std::endl;
		
		// Ask user if they want to go again
		std::cout << "Again Y/N? ";
		
		std::cin >> again;

	}
	while (again == 'Y');

	return 0;
}










