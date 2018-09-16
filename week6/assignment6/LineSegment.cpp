/*********************************************************************
** Author: James G Wilson
** Date: 11/1/2016
** Description: Assignment 6 CS 161
** Class implementation (function defintions) LineSegment.cpp
*********************************************************************/

// Include class interface LineSegment.hpp
#include "LineSegment.hpp"

/*********************************************************************
** Description: Constructor that takes two Point objects as parameters
** and passes them to set methods to initialize the data.
*********************************************************************/
LineSegment::LineSegment(Point endPoint1, Point endPoint2)
{
	setEnd1(endPoint1);
	setEnd2(endPoint2);
}

/*********************************************************************
** Description: Set method for endPoint1 that passes a Point object
** as a paremeter.
*********************************************************************/
void LineSegment::setEnd1(Point endPoint1)
{
	p1 = endPoint1;
}

/*********************************************************************
** Description: Set method for endPoint2 that passes a Point object
** as a parameter.
*********************************************************************/
void LineSegment::setEnd2(Point endPoint2)
{
	p2 = endPoint2;
}

/*********************************************************************
** Description: Get method that returns the p1 Point object.
** 
*********************************************************************/
Point LineSegment::getEnd1()
{
	return p1;
}

/*********************************************************************
** Description: Get method that returns the p2 Point object.
** 
*********************************************************************/
Point LineSegment::getEnd2()
{
	return p2;
}

/*********************************************************************
** Description: Calculates and returns the distance between points 
** p1 and p2 as the length of a line segment. The distanceTo method
** is called from the Point class.
*********************************************************************/
double LineSegment::length()
{

	// Call distanceTo method from Point class to calculate
	// the line segment length between points p1 and p2.
	double length = p1.distanceTo(p2);

	// Return the line segment length
	return length;
}

/*********************************************************************
** Description: Calculates and returns the slope of the line segment
** between points p1 and p2
*********************************************************************/
double LineSegment::slope()
{

	// The slope a line is the "rise over run" as follows
	// (y2 - y1) / (x2 - x1)
	
	// Use Point class get methods to get x and y coordinates
	// for points p1 and p2
	double slope = ( p2.getYcoord() - p1.getYcoord() )  
			/ ( p2.getXcoord() - p1.getXcoord() );

	// Return the slope
	return slope;
}















