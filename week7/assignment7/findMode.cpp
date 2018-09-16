/*********************************************************************
** Author: James G Wilson
** Date: 10/9/2016
** Description: Assignment 7 CS 161 findMode.cpp
*********************************************************************/

/* main function is located after findMode function decleration
it is included for testing and will be omitted prior to 
assignment submission */

/*********************************************************************
** Description: findMode
** Takes an array and finds the value that appears most often (mode)
** and returns a vector with those values in ascending order.
*********************************************************************/
//include vector header file
#include <vector>

//include algorithm header file 
#include <algorithm>

//no size declerator inside brackets of num because it accepts the 
//address of the array. Similar to passing it by reference.
std::vector<int> findMode(int nums[], int size)
{

	//define global variables
	int highCount = 1;

	//define return vector
	std::vector<int> mode;
	
	//sort array into ascending order
	std::sort(nums, nums + size);
	
	//iterate through array to find the most times a
	//number(s) appears. Store this value in highCount.
	for(int i = 0; i < size; i++)
	{

		//initiliaze local variables
		//after each iteration
		int count = 0;
		
		for(int j = i; j < size; j++)
		{
			
			//compare integers in array
			//increment count for each match
			if(nums[i] == nums[j])
			{
				count++;
			}
		}

		//compare count with highCount
		//if count is greater
		//set highCount to count 
		if(count > highCount)
		{
			highCount = count;
		}
	
	}

	//iterate through array knowing the highCount.
	//when the count matches the highCount a mode
	//is found.
	//push modes to mode vector
	for(int i = 0; i < size; i++)
	{
		int count = 0;

		for(int j = i; j < size; j++)
		{
			if(nums[i] == nums[j])
			{
				count++;
			}
		}

		//compare count with highCount
		//if count is equal to highCount
		//push array value to mode vector
		if(count == highCount)
		{
			mode.push_back(nums[i]);
		}
		
	}


	//return mode vector
	return mode;
}

/*********************************************************************
** Description: Main function
** use for testing findMode function
*********************************************************************/
/*
#include <iostream>
int main()
{

	//output test message
	std::cout << "main initiliazed" << std::endl;

	//define vector
	std::vector<int> vector;

	const int ARRAY_SIZE = 5;
	int array[ARRAY_SIZE] = {6,6,3,4,4};

	//call findMode
	vector = findMode(array, ARRAY_SIZE);

	//output test message
	std::cout << "findMode called\n"; 
	std::cout << "testing vector values" << std::endl;

	//range based loop to test vector values
	//C++11 feature
	for(int val : vector)
	{
		std::cout << val;
	}

	//output test message
	std::cout << "\nthe size of the vector is: ";
	std::cout << vector.size();

	std::cout << "\nend test" << std::endl;


	return 0;
}
*/
		
	
	


			
	



	




