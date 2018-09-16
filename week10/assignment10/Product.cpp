/*********************************************************************
** Author: James G Wilson
** Date: 11/24/2016
** Description: Assignment 10 CS 161
** Product.cpp
** A Product object represents a rpdouct with an ID code, title, 
** description, price and quantity available
*********************************************************************/
#include "Product.hpp"
#include <string>
/*********************************************************************
** Description: Product constructor
** Takes five parameters with which to initiliaze the Product's
** idCode, title, description, price, and quantity available.
*********************************************************************/
Product::Product(std::string id, std::string t, std::string d, double p, int qa)
{
	//initialize private members
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

/*********************************************************************
** Description: getIdCode
** Returns the idCode string
*********************************************************************/
std::string Product::getIdCode()
{
	return idCode;
}

/*********************************************************************
** Description: getTitle
** Returns the title string
*********************************************************************/
std::string Product::getTitle()
{
	return title;
}

/*********************************************************************
** Description: getDescription
** Returns the product description string 
*********************************************************************/
std::string Product::getDescription()
{
	return description;
}	

/*********************************************************************
** Description: getPrice
** Returns the price of the product as a double
*********************************************************************/
double Product::getPrice()
{
	return price;
}

/*********************************************************************
** Description: getQuantittyAvailable
** Returns the amount of a certain product available
*********************************************************************/
int Product::getQuantityAvailable()
{
	return quantityAvailable;
}

/*********************************************************************
** Description: decreaseQuantity
** Decreases the quantity available by one
*********************************************************************/
void Product::decreaseQuantity()
{
	quantityAvailable -= 1;
}












