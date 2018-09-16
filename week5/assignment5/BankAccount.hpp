/*********************************************************************
** Author: James G Wilson
** Date: 10/26/2016
** Description: Assignment 5 CS 161 Project 5.b
** Class decleration file (interface) BankAccount.hpp
*********************************************************************/

// "if not defined" preprocessor directive include guard prevents
// this header file from accidently being used more that once.
#ifndef BANKACCOUNT_HPP

// Define BANKACCOUNT_HPP if it has not been already
#define BANKACCOUNT_HPP

// Include string class
#include <string>

// Define BankAccount class
class BankAccount
{

	// Private members
	private:
		std::string customerName;
		std::string customerID;

		double customerBalance;

	// Public methods prototypes
	public:

		// Constructor with 3 parameters
		BankAccount(std::string name, std::string ID, double amount);
		
		// Accessors 
		std::string getCustomerName();
		std::string getCustomerID();
		double getCustomerBalance();

		// These methods take a double input amount
		// and either deduct or add it to the customer balance
		void withdraw(double);
		void deposit(double);

};

// End of include guard
#endif 



