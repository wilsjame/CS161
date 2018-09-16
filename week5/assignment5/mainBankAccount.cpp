/*********************************************************************
** Author: James G Wilson
** Date: 10/26/2016
** Description: Assignment 5 CS 161 Project 5.b main method
*********************************************************************/
#include <iostream>

// Include header (class decleration) file
#include "BankAccount.hpp"

int main()
{
	// Define BankAccount objects
	// Define account1 with paramters
	BankAccount account1("Ron Weasely", "K7104", 8032.78);
		    

	// Test Account1
	std::cout << "account1 info is: ";
	std::cout << account1.getCustomerName();
	std::cout << account1.getCustomerID();
	std::cout << account1.getCustomerBalance();

	// Test withdraw
	std::cout << "Withdrawing 32.78";
	account1.withdraw(32.78);

	std::cout << "The balance is now: ";
	std::cout << account1.getCustomerBalance();
	
	// Test deposit
	std::cout << "Depositing 32.78";
	account1.deposit(32.78);

	std::cout << "The balance is now: ";
	std::cout << account1.getCustomerBalance();


	return 0;
}


			
