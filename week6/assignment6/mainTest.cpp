/*********************************************************************
** Description: main test function 
** 
*********************************************************************/
#include "LineSegment.hpp"

#include <iostream>

int main()
{
	Point p1(1.5, -5);
	Point p2(-1.5, -4.0);

	double dist = p1.distanceTo(p2);

	std::cout << "The dist is: ";
	std::cout << dist << std::endl;

/*
	Point point1(4.3, 7.52);
	Point point2(-17.0, 1.5);
	LineSegment ls1(point1, point2);
*/
	LineSegment ls1(p1, p2);

	double length = ls1.length();

	std::cout << "The length is: ";
	std::cout << length << std::endl;


	double slope = ls1.slope();
	std::cout << "The slope is: ";
	std::cout << slope << std::endl;

	return 0;
}
