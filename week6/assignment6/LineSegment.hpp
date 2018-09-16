/*********************************************************************
** Author: James G Wilson
** Date: 11/1/2016
** Description: Assignment 6 CS 161
** Class interface (decleration file) LineSegment.hpp
*********************************************************************/

// Include guard preprocessor directive "if not defined"
#ifndef LINESEGMENT_HPP

// Define LINESEGMENT_HPP if it has not been already
#define LINESEGMENT_HPP

// Include Point class header file to enable Point object use
#include "Point.hpp" 

// Define LineSegment class
class LineSegment
{

	// Private members
	private:
		
		// Define two Point objects as private members
		Point p1,
		      p2;

	// Public method prototypes
	public:

		// Contstructor
		LineSegment(Point endPoint1, Point endPoint2);

		// Set methods
		void setEnd1(Point endPoint1);
		void setEnd2(Point endPoint2);

		// Get methods
		Point getEnd1();
		Point getEnd2();

		// Uses distanceTo method from Point class
		// to calculate and return the length of
		// the line segment.
		double length();

		// Calculates and returns the slop of the
		// line segment.
		double slope();
};

// End of include guard
#endif
		


