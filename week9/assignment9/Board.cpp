/*********************************************************************
** Author: James G Wilson
** Date: 11/22/2016
** Description: Assignment 9 CS 161
** Board.cpp is the Board class function implementation file
*********************************************************************/
#include "Board.hpp"
#include <iostream>

/*********************************************************************
** Description: default constructor to initialize game board as empty
** 
*********************************************************************/
Board::Board()
{
	
	//iterate rows of gameBoard array
	//stop at 2 because 0-2 includes 3 rows
	for(int row = 0; row != 3; row++)
	{

		//iterate columns of gameBoard array while holding the
		//current row constant
		//stop at 2 because 0-2 includes 3 columns
		for(int column = 0; column != 3; column++)
		{
			gameBoard[row][column] = '.';
		}
	}
}

/*********************************************************************
** Description: takes x and y coordinates of the move and which
** player's turn it is as parameters. Returns true if move is valid 
** and false if move is invalid.
*********************************************************************/
bool Board::makeMove(int rowMove, int columnMove, char player) 
{
	bool boolValue = true;

	if (gameBoard[rowMove][columnMove] == '.')
		gameBoard[rowMove][columnMove] = player;
	else
		boolValue = false;


	return boolValue;
}

/*********************************************************************
** Description: returns the state of the game using the enum data 
** type Game
*********************************************************************/
Game Board::gameState()
{
	if (lineState('x') == 0)
		return X_WON;
	else if (lineState('o') == 0)
		return O_WON;
	else if (lineState('x') == 1)
		return DRAW;
	else if (lineState('o') == 1)
		return DRAW;
	else if (lineState('x') == 2)
		return UNFINISHED;
	else if (lineState('o') == 2)
		return UNFINISHED;
}

/*********************************************************************
** Description: prints the current state of the game board to the
** screen
*********************************************************************/
void Board::print()
{

	//print column numbers on board
	std::cout << " " << " 0" << " 1" << " 2\n";

	//print rows on board
	for (int row = 0; row != 3; row++)
	{

		//print row number
		std::cout << row;

		for (int column = 0; column != 3; column++)
		{
			std::cout << " " << gameBoard[row][column];
		}
		std::cout << std::endl;
	}
}
	
/*********************************************************************
** Description: Checks the state of a line to see if any of the 8 win
** cases have been achieved. Private method of Board class.
*********************************************************************/
gameStatus Board::lineState(char player)
{
	int horizontalCount = 0;
	int verticalCount = 0;
	int spaceTaken= 0;
	
	//check for diagonal win cases
	if (gameBoard[0][0] == player) 
		if (gameBoard[1][1] == player)
			if (gameBoard[2][2] == player)
				return WON;
	if (gameBoard[2][0] == player)
		if (gameBoard[1][1] == player)
			if (gameBoard[0][2] == player)
				return WON;

	//check for horizontal win states
	for (int row = 0; row < 3; row++)
	{
		for(int column = 0; column < 3; column++) 
		{
			if (gameBoard[row][column] == player)
				horizontalCount++;
			if (horizontalCount == 3)
				return WON;
		}
		horizontalCount = 0;
	}

	//check for vertical win states
	for (int column = 0; column < 3; column++)
	{
		for(int row = 0; row < 3; row++)
		{
			if (gameBoard[row][column] == player)
				verticalCount++;
			if (verticalCount == 3)
				return WON;
		}
		verticalCount = 0;
	}

	//check for a tie
	//all spaces must be filled with no winner
	for (int row = 0; row < 3; row++)
	{
		for(int column = 0; column < 3; column++)
		{
			if (gameBoard[row][column] != '.')
				spaceTaken++;
		}
	}
	if (spaceTaken == 9)
		return TIE;
	else
		return NOTFINISHED;
}

