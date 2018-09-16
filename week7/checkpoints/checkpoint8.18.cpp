//checkpoint 8.18

#include <iostream>

//avgArray function prototype 
double avgArray(const int [], int);

int main()
{
	const int SIZE = 10;
	int userNums[SIZE];

	std::cout << "Enter ten integers: ";
	for (int count = 0; count < SIZE; count++)
	{
		std::cout << "#" << (count+1) << " ";
		std::cin >> userNums[count];
	}
	std::cout << "The average of those numbers is ";
	std::cout << avgArray(userNums, SIZE) << std::endl;
	return 0;
}

//avgArray function
double avgArray(const int nums[], int size)
{
	double total = 0.0, average;
	
	for(int index = 0; index < size; index++)
	{
		total += nums[index];
	}
	average = total / size;
	return average;
}





