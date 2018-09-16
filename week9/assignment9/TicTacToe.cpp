/*********************************************************************
** Author: James G Wilson
** Date: 11/22/2016
** Description: Assignment 9 CS 161
** TicTacToe.cpp is the TicTacToe class function implementation file
*********************************************************************/
#include "TicTacToe.hpp"
#include <iostream>

/*********************************************************************
** Description: contructor determines which player goes first
** 
*********************************************************************/
TicTacToe::TicTacToe(char player)
{

	//player1 will be wither x or o
	player1 = player;
	
	//if player1 is x assign o to player2
	if (player1 == 'x')
		player2 = 'o';

	//if player1 is o assign x to player2
	else
		player2 = 'x';
}


/*********************************************************************
** Description: starts the game. keeps looping, asking the correct 
** player for their move and sending it to the board (with makeMove)
** until someone has won or it's a draw (as indicated by gameState)
** and then declare what the outcome was.
*********************************************************************/
void TicTacToe::play()
{

	//variables to hold players' move validity
	bool player1Move,
	     player2Move;

	do
	{
		do
		{
		
		//player chosen from contrusctor will go first
		//get inputs from player1
		std::cout << "Player " << player1;
		std::cout << ": please enter your move.\n";

		std::cin >> row >> column; 

			//if move is valid 
			if (board.makeMove(row, column, player1))
			{

				//player1's move is valid
				player1Move = true;

				//enum return value from switch 
				//determines the state of game 
				//after players move
				switch(board.gameState())
				{
				case X_WON: std::cout << "x wins\n"; 
					    break; //exit switch
				case O_WON: std::cout << "o wins\n";
					    break;
				case DRAW: std::cout << "Draw\n";
					   break;
				case UNFINISHED: 
					   break;
				}

				board.print();
			}
			else
			{
				//player1's move is invalid
				player1Move = false;

				std::cout << "That square is taken";
				std::cout << ", enter a different";
				std::cout << " move\n";
			}
			
		//keep looping until player2's move is valid
		}while(player1Move == false);

		//player2 goes if game is unfinished
		if(board.gameState() == UNFINISHED)
		{
			do
			{
			
			//get inputs from player2
			std::cout << "Player " << player2;
			std::cout << ": please enter your move.\n";

			std::cin >> row >> column; 

				//if move is valid 
				if (board.makeMove(row, column, player2))
				{
					
					//player2's move is valid
					player2Move = true;

					//enum return value from switch 
					//determines the state of game 
					//after players move
					switch(board.gameState())
					{
					case X_WON: std::cout << "x wins\n"; 
						    break; //exit switch
					case O_WON: std::cout << "o wins\n";
						    break;
					case DRAW: std::cout << "Draw\n";
						   break;
					case UNFINISHED: 
						   break;
					}

					board.print();
				}
				else
				{
					//player2's move is invalid
					player2Move = false;

					std::cout << "That square is taken";
					std::cout << ", enter a different";
					std::cout << " move\n";
				}
				
			//keep looping until player2's move is valid
			}while(player2Move == false);
		}
	//continue playing until game is finished
	}while(board.gameState() == UNFINISHED);

}

/*********************************************************************
** Description: main function used for testing and for starting a new
** game. Asks user which player should go first, creates a new 
** TicTacToe object and starts the game.
*********************************************************************/
int main()
{

	//holds user input for player1
	char choice;

	std::cout << "Choose who has the first move\n";
	std::cout << "Input x or o: ";
	std::cin >> choice;

	std::cout << "\nEnter row and column values from 0-2 ";
	std::cout << "seperated by a space\nthen press enter ";
	std::cout << "to make your move.\n";
	std::cout << "For example:\n1 2[ENTER]\n";
	std::cout << std::endl;

	//create new TicTacToe object
	//initialze with choice of player1
	TicTacToe newGame(choice);

	//start game
	newGame.play();

	return 0;
}







