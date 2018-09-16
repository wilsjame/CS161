/*********************************************************************
** Author: James G Wilson
** Date: 10/26/2016
** Description: Assignment 5 CS 161 Project 5.b
** Class implementation file (function definitions) BankAccount.cpp
*********************************************************************/
#include <iostream>

// Include class decleration (interface) file BankAccount.hpp
#include "BankAccount.hpp"

/*********************************************************************
** Description: Constructor that directly assigns values to data 
** data members.
*********************************************************************/
BankAccount::BankAccount(std::string name, std::string ID, double amount)
{
	customerName = name;
	customerID = ID;
	customerBalance = amount;
}

/*********************************************************************
** Description: Get function that gets the customer name from the 
** user and returns it.
*********************************************************************/
std::string BankAccount::getCustomerName()
{
	return customerName;
}

/*********************************************************************
** Description: Get function that get the customer ID from the user
** and returns it.
*********************************************************************/
std::string BankAccount::getCustomerID()
{
	return customerID;
}

/*********************************************************************
** Description: Method that takes a double parameter and deducts it
** from the customer balance.
*********************************************************************/
void BankAccount::withdraw(double amount)
{
	customerBalance -= amount;
}

/*********************************************************************
** Description: Method that takes a double parameter and adds it to
** the customer balance.
*********************************************************************/
void BankAccount::deposit(double amount)
{
	customerBalance += amount;
}

/*********************************************************************
** Description: Method that returns the customer balance
** 
*********************************************************************/
double BankAccount::getCustomerBalance()
{
	return customerBalance;
}











