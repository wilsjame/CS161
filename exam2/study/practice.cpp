#include <iostream>
#include <string>
int main()
{
	//q6
	/*
	int nums[4] = { 1, 2, 3, 4 };
	nums[2] = 7;
	std::cout << *nums;
	std::cout << std::endl;
	*/

	//q13
	std::string str = "infinite indigo origami";
	std::string output = " ";
	int counter = 1;
	while (str.at(counter) != 'i')
	{
		output += str.at(counter);
		counter += 3;
	}
	std::cout << output << std::endl;
	
	return 0;
}

