/*********************************************************************
** Author: James G Wilson
** Date: 10/5/2016
** Description: Assignment 2 Project 2.c CS 161
*********************************************************************/
// This program converts cents less than a dollar into the optimal
// change. 
#include <iostream>

int main()
{
	int cents,
	    Q,
	    change1,
	    D,
	    change2,
	    N,
	    P;
	
	// Get inputs
	std::cout << "Please enter an amount in cents less than a dollar.\n";
	std::cin >> cents;
	
	// Perform calculations
	Q = cents / 25;
	change1 = cents % 25;
	D = change1 / 10;
	change2 = change1 % 10;
	N = change2 / 5; 
	P = change2 % 5;

	// Display output
	std::cout << "Your change will be:\n";
	std::cout << "Q: " << Q << std::endl;
	std::cout << "D: " << D << std::endl;
	std::cout << "N: " << N << std::endl;
	std::cout << "P: " << P << std::endl;


	return 0;
}

