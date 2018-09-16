/*********************************************************************
** Author: James G Wilson
** Date: 10/28/2016
** Description: Assignment 6 CS 161
** Class implementation (function definitions) Point.cpp
*********************************************************************/

// Include class interface Point.hpp
#include "Point.hpp"

// Include <cmath> library to use sqrt() and pow()
#include <cmath>

/*********************************************************************
** Description: Default contrusctor initialize set methods to 1.
** 
*********************************************************************/
Point::Point()
{
	setXcoord(0);
	setYcoord(0);
}

/*********************************************************************
** Description: Constructor that takes two doubles and passes them
** to the set methods to intitialize the X and Y coordinates.
*********************************************************************/
Point::Point(double Xin, double Yin)
{
	setXcoord(Xin);
	setYcoord(Yin);
}

/*********************************************************************
** Description: Set method for the X coordinate.
** 
*********************************************************************/
void Point::setXcoord(double Xin)
{
	X = Xin;
}

/*********************************************************************
** Description: Set method for the Y coordinte.
** 
*********************************************************************/
void Point::setYcoord(double Yin)
{
	Y = Yin;
}

/*********************************************************************
** Description: Get method to return the X coordinate. Designate as
** a constant function.
*********************************************************************/
double Point::getXcoord() const
{
	return X;
}

/*********************************************************************
** Description: Get method to return the Y coordinate. Designate as
** a constant function.
*********************************************************************/
double Point::getYcoord() const
{
	return Y;
}

/*********************************************************************
** Description: Takes a parameter as a contstant reference to another
** Point object and returns the distance between the two Points 
** objects.
*********************************************************************/
double Point::distanceTo(const Point& anotherPoint)
{
	double dist;

	// The distance between two points is as follows
	// distance = sqrt[ (x2-x1)^2 + (y2-y1)^2 ] 
	dist = sqrt( pow(anotherPoint.getXcoord() - getXcoord(), 2.0)
			+ pow(anotherPoint.getYcoord() - getYcoord(),
				2.0) ); 

	return dist;
}








