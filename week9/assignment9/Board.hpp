/*********************************************************************
** Author: James G Wilson
** Date: 11/22/2016
** Description: Assignment 9 CS 161
** Board.hpp is the Board class decleration file (interface)
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

//declare enumerated types

//Game used in TicTacToe method play() 
//X_WON - UNFINISHED will be assignment defualt values 0-3
enum Game { X_WON, O_WON, DRAW, UNFINISHED };

//gameStatue used in Board private method lineState(char)
enum gameStatus { WON, TIE, NOTFINISHED };

class Board
{
	private:

		//3x3 array data member
		//stores locations of player's moves
		char gameBoard[3][3];

		//private member function
		//determines the line state.
		//used in gameState()
		gameStatus lineState(char player); 

	public:

		//default constructor
		//initialize gameBoard as empty
		Board();

		//takes x and y coordinates of the move and which
		//player's turn it is as parameters
		bool makeMove(int xCoord, int yCoord, char player); 
		
		//returns the state of the game using enum data
		//type Game
		Game gameState();

		//prints the current state of the game board 
		//to the screen
		void print();
};

#endif






