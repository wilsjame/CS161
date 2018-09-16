/*********************************************************************
** Author: James G Wilson
** Date: 11/29/2016
** Description: Assignment 10 CS 161
** Store.cpp
** A Store object represents a store, which has some number of 
** products in its inventory and some number of customers as members
*********************************************************************/
#include "Store.hpp"
#include <string>
#include <iostream>
#include <cctype> //toupper function
/*********************************************************************
** Description: addProduct
** Adds a product to the private member- inventory
** Takes a pointer to a Product object as a parameter
*********************************************************************/
void Store::addProduct(Product* p)
{
	//push_back vector member function
	inventory.push_back(p);
}
	
/*********************************************************************
** Description: addMember
** Adds a customer to the private member- members
** Takes a pointer to a Customer object as a parameter
*********************************************************************/
void Store::addMember(Customer* c)
{
	members.push_back(c);
}
	
/*********************************************************************
** Description: getProductFromID
** Returns product with matching ID. Returns NULL if no matching ID
** is found
*********************************************************************/
Product* Store::getProductFromID(std::string productId)
{
	//create a pointer to a Product class object
	Product *ptrProd;

	//find size of inventory vector
	int sizeInv = inventory.size();

	//iterate through inventory using its size as the end value
	for(int i = 0; i < sizeInv; i++)
	{
		//inventory is a vector of pointers to Product objects
		//"->" structure pointer operator accesses
		//members (methods) of Product class through the 
		//pointer
		if(inventory[i]->getIdCode() == productId)
		{
			//inventory vector address is a pointer
			//to a Product object that has matched 
			ptrProd = inventory[i];
		}
		else
		{
			//assign NULL to ptrProd if no id match
			ptrProd = NULL;
		}
	}

	return ptrProd;
}

/*********************************************************************
** Description: getMemberFromID
** Returns customer with matching ID. Returns NULL is no matching ID
** is found
*********************************************************************/
Customer* Store::getMemberFromID(std::string customerId)
{
	//create a pointer to a Customer class object
	Customer *ptrCustomer;

	//find size of members vector
	int sizeMembers = members.size();

	//iterate through members use its size as the end value
	for (int i = 0; i < sizeMembers; i++)
	{
		//members is a vector of pointers to Customer objects
		//"->" structure pointer operator accesses
		//members (methods) of Customer class through the
		//pointer
		if(members[i]->getAccountID() == customerId)
		{
			//members vector address is a pointer
			//to a Customer object that has matched
			ptrCustomer = members[i];
		}
		else
		{
			//assign NULL to ptrCustomer if no id match
			ptrCustomer = NULL;
		}
	}
	return ptrCustomer;
}

/*********************************************************************
** Description: productSearch
** For every product whose title or description contains the search 
** string- prints out that product's title, ID code, price and 
** description. The first letter of the search string should be case-
** insensitive, i.e. a search for "wood" should match Products that
** have "Wood" in their title description, and a search for "Wood"
** should match Products that have "wood" in their title or description
*********************************************************************/
void Store::productSearch(std::string str)
{
	//define number of products in inventory vector
	int sizeInv = inventory.size();

	//variables to be used with the string::find function 
	std::size_t foundTitle,
		foundTitle2,
		foundDescription,
		foundDescription2;

	//copy search string into string variable str2
	std::string str2 = str;

	//convert first letter to opposite case
	//using str2- the copy of str
	if(isupper(str2[0]))
		str2[0] = tolower(str2[0]);
	else
		str2[0] = toupper(str2[0]);

	for(int i = 0; i < sizeInv; i++)
	{
		foundTitle = (inventory[i]->getTitle()).find(str);
		foundDescription = (inventory[i]->getDescription()).find(str);

		foundTitle2 = (inventory[i]->getTitle()).find(str2);
		foundDescription2 = (inventory[i]->getDescription()).find(str2);

		//output product information if a match is found
		if(foundTitle != std::string::npos || foundDescription != std::string::npos)
		{
			std::cout << inventory[i]->getTitle() << "\n";
			std::cout << "ID code: ";
			std::cout << inventory[i]->getIdCode() << "\n";
			std::cout << "price: $";
			std::cout << inventory[i]->getPrice() << "\n";
			std::cout << inventory[i]->getDescription() << "\n";
			std::cout << std::endl;
		}
		//output product information if a match is found
		if(foundTitle2 != std::string::npos || foundDescription2 != std::string::npos)
		{
			std::cout << inventory[i]->getTitle() << "\n";
			std::cout << "ID code: ";
			std::cout << inventory[i]->getIdCode() << "\n";
			std::cout << "price: $";
			std::cout << inventory[i]->getPrice() << "\n";
			std::cout << inventory[i]->getDescription() << "\n";
			std::cout << std::endl;
		}
	}
}

/*********************************************************************
** Description: addProductToMemberCart
** If the product isn't found in the inventory, print
** "Product #[idCode goes here] not found."  If the member isn't
** found in the members, print "Member #[accountID goes here] not 
** found." If both are found and The product is still available, calls
** the member's addProductToCart method.  Otherwise it prints 
** "Sorry, product #[idCode goes here] is currently out of stock."  
** The same product can be added multiple times if the customer 
** Wants more than one of something.
*********************************************************************/
void Store::addProductToMemberCart(std::string pID, std::string mID)
{
	//determine sizes of inventory members
	int sizeInv = inventory.size();
	int sizeMembers = members.size();
	int invLocation,
	    customer;

	//test variables
	bool pIDmatch = false;
	bool mIDmatch = false;
	bool inStock;

	//iterate through inventory (vector containg Product objects)
	//looking for pID
	for(int i = 0; i < sizeInv; i++)
	{ 
		if(inventory[i]->getIdCode() == pID)
		{
			pIDmatch = true;
			invLocation = i;
		}
	}
	//show output message if the product ID is not found
	if(pIDmatch != true)
	{
		std::cout << "Product #" << pID << " not found.";
		std::cout << std::endl;
	}
	//iterate through members (vector containing Customer objects) 
	//looking for mID
	for(int i = 0; i < sizeMembers; i++)
	{
		if(members[i]->getAccountID() == mID)
		{
			mIDmatch = true;
			customer = i;
		}
	}
	//show output message if the member ID is not found
	if(mIDmatch != true)
		std::cout << "Member #" << mID << " not found.";

	//take action if both the product and member ID's are found
	if(pIDmatch && mIDmatch)
	{
		//check availability of product
		if(inventory[invLocation]->getQuantityAvailable() > 0)
		{
			//add to members cart if product is in stock
			members[customer]->addProductToCart(pID);
		}
		else
		{
			std::cout << "Sorry, product " << pID;
			std::cout << " is currently out of stock.\n";
			std::cout << std::endl;
		}
	}
}

/*********************************************************************
** Description: checkOut
** If the member isn't found in the members, print
** "Member #[accountID goes here] not found."  
** Otherwise prints out the title and price for each product 
** in the cart and decreases the available quantity of that product by 
** 1.  If any product has already sold out, then on that line it
** should print 'Sorry, product #[idCode goes here],
** "[product name goes here]", is no longer available.'  At the bottom
** it should print out the subtotal for the cart, the shipping cost
** ($0 for premium members, 7% of the cart cost for normal members), 
** and the final total cost for the cart (subtotal plus shipping).  
** If the cart is empty, it should just print 
** "There are no items in the cart."  When the calculations 
** are complete, the member's cart should be emptied.
*********************************************************************/
void Store::checkOutMember(std::string mID)
{
	int sizeMembers = members.size();
	int sizeInventory = inventory.size();
	int customer;
	
	double cost,
	       shippingCost;

	bool mIDmatch = false;
	
	//create a vector for cart
	std::vector<std::string> cart;

	//search members for mID
	for(int i = 0; i < sizeMembers; i++)
	{
		if(members[i]->getAccountID() == mID)
		{
			mIDmatch = true;
			customer = i;
		}
	}

	if(mIDmatch != true)
	{
		std::cout << "Member# " << mID;
		std::cout << " not found.";
	}
	//member ID was found now get pointer to customer and 
	//look in cart
	else 
	{
		cart = members[customer]->getCart();

		//find size of customers cart
		int cartSize = cart.size(); 

		//print message if cart is empty
		if(cartSize == 0)
		{
			std::cout << "There are no items in the cart.\n";
		}
		else
		{
			//print title and price for each product 
			//get
			for(int i = 0; i < sizeInventory; i++)
			{
				for(int j = 0; j < cartSize; j++)
				{
				if(inventory[i]->getIdCode() == cart[j]) 
				{
					//match is found
					//check stock
					if(inventory[i]->getQuantityAvailable() == 0)
					{
						std::cout << "Sorry, Product #";
						std::cout << inventory[i]->getIdCode();
						std::cout << ", ";
						std::cout << inventory[i]->getTitle();
						std::cout << ", is no longer available.\n";
					}
					else 
					{
						std::cout << inventory[i]->getTitle() << " - $";
						std::cout << inventory[i]->getPrice() << "\n";

						//add product price to cost
						cost += inventory[i]->getPrice();
						//decrease stock by one
						inventory[i]->decreaseQuantity();
					}
				}
				}
			}
			//check if member is premium
			if(members[customer]->isPremiumMember())
			{
				shippingCost = 0;
			}
			//for normal members
			else
			{
				//7% of cart total is shipping cost
				shippingCost = 0.07 * cost;
			}
			//output subtotal for the cart, the shipping cost, 
			//and final total cost (subtotal plus Shipping
			std::cout << "Subtotal: $" << cost << std::endl; 
			std::cout << "Shipping cost: $" << shippingCost << std::endl;
			std::cout << "Total cost: $" << cost + shippingCost << std::endl;

			//empty cart
			members[customer]->emptyCart();

		}
	}
}

/*********************************************************************
** Description: main for testing
** 
*********************************************************************/
/*
int main()
{
	//std::cout << "main tested\n";

	//create some products
	Product p1("1a", "Nalgene Bottle", "1L water bottle", 6.99, 0),
		p2("2b", "red blender", "sturdy blender perfect for making smoothies and sauces", 350, 3),
		p3("3c", "hot air balloon", "fly into the sky in your own balloon - comes in red, blue, or chartreuse", 700, 1),
		p4("4d", "giant robot", "nickname: the iron giant", 7000, 0), 
		p5("5e", "live goat", "greatest of all time", 40, 1),
		p6("5f", "oak and glass coffee table", "a sturdy table with iron supports", 250, 2);


	//create some customers
	Customer Bilbo("Bilbo Swaggins", "Bilbo", true);
	
	//create a store
	Store s;

	s.addProduct(&p1);
	s.addProduct(&p2);
	s.addProduct(&p3);
	s.addProduct(&p4);
	s.addProduct(&p5);
	s.addProduct(&p6);

	s.addMember(&Bilbo);

	s.productSearch("Water");
	s.productSearch("Iron");
	s.productSearch("goat");
	
	s.addProductToMemberCart("1a", "Bilbo");
	s.addProductToMemberCart("4d", "Bilbo");
	s.addProductToMemberCart("5e", "Bilbo");
	s.addProductToMemberCart("5e", "Bilbo");



	s.checkOutMember("Bilbo");



	return 0;
}
*/




		




	







	




     

     		

	






