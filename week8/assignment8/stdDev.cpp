/*********************************************************************
** Author: James G Wilson
** Date: 11/14/2016
** Description: Assignment 8 CS 161 Project 8.b stdDev.cpp
** A function called stdDev that takes two parameters - an array of
** pointers to Students and the size on an array - and returns
** the population standard deviation for the student scores.
*********************************************************************/
//main function used for testing
/*
 
#include <iostream>

//function prototype
double stdDev(Student *arrayIn[], double sizeIn);


//main
int main()
{
	Student s1("Bilbo", 13);
	Student s2("Swaggins", 23);
	Student s3("Gandalf", 12);

	Student *myArray[] = {&s1, &s2, &s3};

	std::cout << "the stdDev is:\n";
	std::cout << stdDev(myArray, 3) << std::endl;


	return 0;
}

*/

/*********************************************************************
** Description: The function stdDev takes two parameters - an array
** of pointers to Students and the size of an array - and returns
** the population standard deviation for the student scores.
*********************************************************************/

//include Student class
#include "Student.hpp"

//include cmath to use sqaure root
#include <cmath>

//return value is double: the standard deviation
//first parameter is an array of pointers to the Student class objects
//second parameter is the size of the array of pointers
double stdDev(Student *arrayIn[], double sizeIn)
{

	//define variables
	double mean,
	       mean2,
	       stdDev;
	
	//initialize accumulator
	int total = 0;

	//sum scores
	for(int i = 0; i < sizeIn; i++)
	{
		//-> accesses the member function of the Student object
		//arrayIn[i] is pointing to 
		total += arrayIn[i]->getScore();
	}

	//find mean (average)
	mean = total / sizeIn;

	//initialize second accumulator
	int total2 = 0;
	
	//for each score: subtract the mean and square the result
	for(int i = 0; i < sizeIn; i++)
	{
		//-> accesses the member function of the Student object
		//arrayIn[i] is pointing to
		total2 += pow((arrayIn[i]->getScore()) - mean, 2.0);
	}

	//find mean of those squared differences (total2)
	mean2 = total2 / sizeIn;

	//take square root of mean2 to find stdDev
	stdDev = sqrt(mean2);

	//return the standard deviation
	return stdDev;
}
	
	

	


	
