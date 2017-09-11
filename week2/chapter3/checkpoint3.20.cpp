// Checkpoint 3.20
// This program converts a speed entered in miles per hour
// to feet per second. 
// One miles per hour is 1.467 feet per second.
#include <iostream>
using namespace std;

int main()
{
	const float CONVERSION = 1.467;
	double milesPerHour, feetPerSecond;

	cout << "This program converts miles per hour to\n";
	cout << "feet per second.\n";
	cout << "Enter a speed in MPH: ";
	cin >> milesPerHour;
	
	feetPerSecond = milesPerHour * CONVERSION;

	cout << "That is " << feetPerSecond << " feet per second.\n"; 	
	return 0;
}

