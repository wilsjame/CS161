/*********************************************************************
** Author: James G Wilson
** Date: 11/14/2016
** Description: Assignment 8 CS 161 Project 8.b
** Class implementation (function definitions) Student.cpp
*********************************************************************/

//include class interface
#include "Student.hpp"

#include <string>

/*********************************************************************
** Description: Constructor initiliazes private members.
** 
*********************************************************************/
Student::Student(std::string nameIn, double scoreIn)
{
	name = nameIn;
	score = scoreIn;
}

/*********************************************************************
** Description: get method for name
** 
*********************************************************************/
std::string Student::getName() const
{
	return name;
}

/*********************************************************************
** Description: get method for score
** 
*********************************************************************/
double Student::getScore() const
{
	return score;
}






