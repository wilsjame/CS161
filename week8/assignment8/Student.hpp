/*********************************************************************
** Author: James G Wilson
** Date: 11/14/2016
** Description: Assignment 8 CS 161 Project 8.b
** Class interface (decleration file) Student.hpp
*********************************************************************/

//include guard preprocessor directive "if not defined"
#ifndef STUDENT_HPP

//define STUDENT_HPP if it has not been already
#define STUDENT_HPP

#include <string>

//define Student class
class Student
{

	//private members
	private:
		std::string name;
		double score;

	//public methods (prototypes)
	public:

		//constructor
		Student(std::string nameIn, double scoreIn);

		//get methods (accessors)
		//designate as const so outside functions to call
		//them withour risk of altering data
		std::string getName() const;
		double getScore() const;
};

//end of include guard
#endif
		
		




