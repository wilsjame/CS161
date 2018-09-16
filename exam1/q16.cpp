// Question 16

#include <iostream>

int main()
{
	int result = 0;

	for (int i=0; i<5; i++)
	{
		if (i < 5)
			result++;
		if(i = 5)
			result += i;
	}

	std::cout << result << std::endl;

	return 0;
}

