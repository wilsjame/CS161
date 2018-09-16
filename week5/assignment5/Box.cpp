/*********************************************************************
** Author: James G Wilson
** Date: 10/25/2016
** Description: Assignment 5 CS 161 Project 5.a
** Class implementation file (function definitions) Box.cpp
*********************************************************************/
#include <iostream>

// Include the class decleration (interface) file Box.hpp
#include "Box.hpp"


/*********************************************************************
** Description: Default constructor initiliazes set methods (mutators)
** to 1.
*********************************************************************/
Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
}

/*********************************************************************
** Description: Constructor that takes three doubles and passes them
** to the set methods (mutators) to initialize the fields of the box.
*********************************************************************/
Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}

/*********************************************************************
** Description: Setter function that copies the argument passed into
** the parameter to the private member variable height.
*********************************************************************/
void Box::setHeight(double h)
{
	height = h;
}

/*********************************************************************
** Description: Set method that copies the argument passed into the 
** parameter to the private member variable width.
*********************************************************************/
void Box::setWidth(double w)
{
	width = w;
}

/*********************************************************************
** Description: Set method that copies the argument passed into the 
** parameter to the private memer variable length.
*********************************************************************/
void Box::setLength(double l)
{
	length = l;
}

/*********************************************************************
** Description: Accessor function that calculates and returns the 
** volume.
*********************************************************************/
double Box::getVolume()
{
	double volume;

	return volume = height * width * length;
}

/*********************************************************************
** Description: Get function that calculates and returns the surface
** area.
*********************************************************************/
double Box::getSurfaceArea()
{
	double surfaceArea;

	surfaceArea = 2.0 * length * height + 2.0 * width * height;

	return surfaceArea;
}	
	









