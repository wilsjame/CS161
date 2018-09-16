// Question 20

#include <iostream>
#include <string>


int main()
{
	std::string str = "crockpot of ontological orthodoxy";
	std::string output = "";
	int counter = 1;

	while(str.at(counter) != 'o')
	{
		output += str.at(counter);
		counter += 3;
	}
	std::cout << output << std::endl;

	return 0;
}


