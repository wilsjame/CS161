//checkpoint 8.25
#include <iostream>

//function prototype
void displayArray7(int [][7], int);

int main()
{
	int hours[5][7];
	int stamps[8][7];
	int autos[12][7];

	displayArray7(hours, 5);
	displayArray7(stamps, 8);
	displayArray7(autos, 12);

	return 0;
}







//function definition
void displayArray7(int array[][7], int numRows)
{
	for(int r = 0; r < numRows; r ++)
	{
		for(int c = 0; c < 7; c ++)
		{
			std::cout << array[r][c] << " ";
		}
		std::cout << std::endl;
	}
}


