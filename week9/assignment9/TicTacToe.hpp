/*********************************************************************
** Author: James G Wilson
** Date: 11/22/2016
** Description: Assignment 9 CS 161
** TicTacToe.hpp is the TicTacToe class decleration file
*********************************************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe
{
	private:
		
		//define one board object as a private member
		Board board;

		int row,
		    column;

		char player1,
		     player2;

	public:

		//constructor takes a char to determine whether
		//player 'x' or 'o' should have the first move
		TicTacToe(char);

		//starts the game
		void play();
};

#endif 





