/*********************************************************************
** Author: James G Wilson
** Date: 10/28/2016
** Description: Assignment 6 CS 161
** Class interface (decleration file) Point.hpp
*********************************************************************/

// Include guard preprocessor direcive "if not defined"
#ifndef POINT_HPP

// Define POINT_HPP if it has not been already
#define POINT_HPP

// Define Point class
class Point
{

	// Private members
	private:
		double X,
		       Y;

	// Public method prototypes
	public:

		// Default constructor
		Point();

		// Constructor
		Point(double Xin, double Yin);

		// Set methods (mutators) 
		void setXcoord(double Xin);
		void setYcoord(double Yin);

		// Get methods (accessors)
		// For distanceTo to call these functions include
		// const (designate as constant functions)
		double getXcoord() const;
		double getYcoord() const;

		// Takes a parameter as a constant reference to
		// another Point object and returns the distance
		// between the two Point objects.
		double distanceTo(const Point& anotherPoint);
};

// End of include guard
#endif




