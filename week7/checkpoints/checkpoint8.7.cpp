// Checkpoint 8.7
// This program asks how many fish were caught by fisherman
// 1 through 10, and stores the information in an array.
// Then displays the data.

#include <iostream>

int main()
{

	// Define constant size declerator
	const int NUM_MEN = 10;

	// Define array named fish that holds 10 int values
	int fish[NUM_MEN];

	// Get how many fish were caught be each fisherman
	for(int count = 0; count < NUM_MEN; count++)
	{
		std::cout << "Enter the number of fish caught by\n";
		std::cout << "fisherman number " << count+1 << ": ";

		std::cin >> fish[count];
	}

	// Display array data
	for(int count = 0; count < NUM_MEN; count++)
	{
		std::cout << "Fisherman " << count+1;
		std::cout << " caught " << fish[count];
		std::cout << " fish.\n";
	}

	return 0;
}




