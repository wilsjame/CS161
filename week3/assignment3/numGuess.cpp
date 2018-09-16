/*********************************************************************
** Author: James G Wilson
** Date: 10/13/2016
** Description: Assignment 3 CS 161
*********************************************************************/
// This program is a number guessing game. An integer is entered to 
// be guessed. Then guesses will be made and after each guess either 
// "too low" or "too high" will be until the correct number is   
// guessed. When the correct number is guessed, the number of tries  
// will be displayed.
#include <iostream>

int main()
{
	int correctGuess,
	    total = 0,
	    guess;

	// Get integer to guess from user
	std::cout << "Enter the number for the player to guess.\n";
	std::cin >> correctGuess;

	//Have player begin guessing
	std::cout << "Enter your guess.\n";

	do 
	{
		std::cin >> guess;

		// Add increment counter
		total++;
		
		// Compare guess with correct guess
		if (guess == correctGuess)
		{
			std::cout << "You guessed it in ";
			std::cout << total << " tries.\n"; 
		}
		else if (guess < correctGuess)
			std::cout << "Too low - try again.\n"; 
		else if (guess > correctGuess)
			std::cout << "Too high - try again.\n";
	}	
	while (guess != correctGuess);


	return 0;
}
		


