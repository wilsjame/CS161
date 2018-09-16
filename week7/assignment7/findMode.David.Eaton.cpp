/*****************************************************************************

** Name:  David Eaton

** Date: 11/8/16

** Description:findMode.cpp is a function file that finds mode(s) and returns them in ascending order via a function called findMode.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector <int> findMode(int a[], int); //prototype
 
int main()
{
	const int E = 2;
        int array1[E] = {1,2}; //,3,4,5,6,7,8,9}; //,4,5,6,7,8,9,10,12,11};

        int read;

       std::vector<int> modes(findMode(array1,E));

	int count = modes.size();

        for(int i=0; i< count; i++)
        {
                read = modes.at(i);

               std::cout << read  <<std::endl;
        }

        return 0;
}


/******************************************************************************
  
** Description: findMode is a function that takes a integer array and its integer size as parameters and sorts that array and returns the mode of that array in ascending order.

******************************************************************************/   

std::vector <int> findMode(int array[], int size )
{
	std::sort(array, array + size); //sort array parameter

	int frequency, maxFrequency = 0; 	//counter variable

	std::vector <int> mode;		//vector utilized to store mode

	for(int i = 0; i < size; i++)  //find maxFrequency 
	{
		if (i == 0)
			frequency++ ;

		else if (array[i] == array[i-1])
			frequency++ ;	
		
		else if(array[i] != array[i-1]) //reset frequency counter
			frequency = 1;
	 
		if(frequency >= maxFrequency)
			maxFrequency = frequency;
					
	}

	//compares array with maxFrequency
	for(int j = 0; j < size; j++)   
	{     		
		if(array[j] == array[j-1])
			frequency++;

 		if(array[j] != array [j-1]) //reset counter
			frequency = 1;
	
		if(frequency == maxFrequency)
		{ 
			if(array[j] != array[j+1])
				mode.push_back(array[j]);

		}
	}

	return mode;
}		
