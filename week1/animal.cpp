/*********************************************************************
** Author: James G Wilson
** Description: Assignment 1 CS 161
** Date: 9/28/2016
*********************************************************************/

#include <iostream>
#include <string>


// a simple example program
int main()
{	
	using std::cin;
	using std::cout;
	std::string faveAnimal;
	cout << "Please enter your favorite animal." << std::endl;
	cin >> faveAnimal;
	cout << "Your favorite animal is the " <<faveAnimal;
	cout << "." << std::endl;
	

	return 0;
}
