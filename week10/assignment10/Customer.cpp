/*********************************************************************
** Author: James G Wilson
** Date: 11/24/2016
** Description: Assignment 10 CS 161
** Customer.cpp
** A customer object represents a customer with a name and account ID. 
** Customers must be members of the Store to make a purchase
** premium members get free shipping
*********************************************************************/
#include "Customer.hpp"
#include <string>
#include <vector>
/*********************************************************************
** Description: Customer constructor
** Takes as parameters three values with which to initialize the 
** Customer's name, account ID, and whether the customer is a 
** premium member
*********************************************************************/
Customer::Customer(std::string  n, std::string a, bool pm)
{
	name = n; 
	accountID = a;
	premiumMember = pm;
}

/*********************************************************************
** Description: getAccountID
** Return the value of corresponding data member
*********************************************************************/
std::string Customer::getAccountID()
{
	return accountID;
}

/*********************************************************************
** Description: getCart
** Return value of the corresponding data member
*********************************************************************/
std::vector<std::string> Customer::getCart()
{
	return cart;
}

/********************************************************************
** Description: addProductToCart
** Adds the product ID code to the Customer's cart
*********************************************************************/
void Customer::addProductToCart(std::string productID)
{
	//push_back vector member function
	//adds an element to the end of the cart vector
	cart.push_back(productID);
}
	
/*********************************************************************
** Description: isPremiumMember
** Returns whether the customer is a premium member
*********************************************************************/
bool Customer::isPremiumMember()
{
	return premiumMember;
}

/*********************************************************************
** Description: emptyCart
** Empties the Customer's cart
*********************************************************************/
void Customer::emptyCart()
{
	//deletes all elements in cart vector
	cart.clear();
}






