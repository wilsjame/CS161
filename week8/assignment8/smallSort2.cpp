/*********************************************************************
** Author: James G Wilson
** Date: 11/14/2016
** Description: Assignment 8 CS 161 Project 8.a smallSort2.cpp
** smallSoet2 is a void function that takes
** as parameters the addresses of three int variables and sorts
** the ints at those addresses into ascending order.
*********************************************************************/
//main function used for testing 
/*
 
#include <iostream>

//function prototype
void smallSort2(int *, int *, int *);

//main 
int main()
{
	int a = 14;
	int b = -90;
	int c = 2;

	std::cout << "variables initialized\n";

	//call smallSort2
	smallSort2(&a, &b, &c);

	std::cout << "smallSort2 called\n";
	std::cout << a << ", " << b << ", " << c << std::endl;

	std::cout << "end of test" << std::endl;

	
	return 0;
}

*/

/*********************************************************************
** Description: The function smallSort2 takes three addresses of int  
** as parameters and sorts the ints at those addresses into ascending
** order.
*********************************************************************/
//* indicates the parameters are pointers to an address of a variable
void smallSort2(int *a, int *b, int *c)
{

	//define temp variable used for swapping values
	int temp;

	//begin do-while loop
	do
	{

		//compare a with b
		//swap if a is greater
		//use * operator to work with variables 
		if (*a > *b)
		{
			temp = *a;
			*a = *b;
			*b = temp;
		}

		//compare a and c
		//swap if c is greater
		else if (*a > *c)
		{
			temp = *a;
			*a = *c;
			*c = temp;
		}

		//trailing else swaps b and c
		else
		{
			temp = *b;
			*b = *c;
			*c = temp;
		}

	//repeat do-while loop if c is less than b
	} while (*c <*b);
}

		


	






