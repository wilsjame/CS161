// Checkpoint 3.13
// This program calculates the volume of a cylindrical fuel tank.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double volume, radius, height;
	cout << "This program will tell you the volume of\n";
	cout << "a cylinder-shaped fuel tank.\n";
	cout << "How tall is the tank? ";
	cin >> height;
	cout << "What is the radius of the tank? ";
	cin >> radius;
	
	// Volume formula
	volume = 3.14159 * pow(radius,2) * height;
	cout << "The volume is " << volume << endl;

	return 0;
}
