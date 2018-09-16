/*********************************************************************
** Author: James G Wilson
** Date: 10/25/2016
** Description: Assignment 5 CS 161 Project 5.a
** Class decleration file (interface) Box.hpp
*********************************************************************/

// "if not defined" preprocessor directive is called an include guard.
// It prevents the header file from accidently being used more than
// once. 
#ifndef BOX_HPP

// Define BOX_HPP if it has not been already
#define BOX_HPP

// Define the interface of the Box class
class Box
{

	// Private member variables
	private:
		double height,
		       width,
		       length;
		
	// Public member functions (methods) prototypes
	public:

		// Default constructor 
		Box();

		// Constructor with 3 parameters
		Box(double h, double w, double l);

		// Mutators- functions that store or change member
		// variables or values
		void setHeight(double h);
		void setWidth(double w);
		void setLength(double l);

		// Accessors- functions that use member variables
		// but do not change them
		double getVolume();
		double getSurfaceArea();
};

// End of include guard
#endif



