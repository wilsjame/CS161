/*********************************************************************
** Description: Checks the state of a line to see if any of the 8 win
** cases have been achieved
*********************************************************************/
enum lineState(char player)
{
	//bool boolValue = true;
	int horizontalCount = 0;
	int verticalCount = 0;
	int emptyCount = 0;
	enum lineState { WON, TIE, NOTFINISHED}
	
	//check for diagonal win cases
	if (gameBoard[0][0] == 'player') 
		if (gameBoard[1][1] == 'player')
			if (gameBoard[2][2] == 'player')
				return WON;
	if (gameBoard[2][0] == 'player')
		if (gameBoard[1][1] == 'player')
			if (gameBoard[0][2] == 'x')
				return WON;

	//check for horizontal win states
	for (int row = 0; row == 2; row++)
	{
		for(int column = 0; column == 2; column++) 
		{
			if (gameBoard[row][column] == 'player')
				horizontalCount++;
			else
				horizaontalCount = 0;
		}
	}
	if (horizontalCount == 3)
		return WON;

	//check for vertical win states
	for (int column = 0; column == 2; column++)
	{
		for(int row = 0; row == 2; row++)
		{
			if (gameBoard[row][column] == 'player')
				verticalCount++;
			else
				verticalCount = 0;
		}
	}
	if (verticalCount == 3)
		return WON;

	//check for a tie
	//all spaces must be filled with no winner
	for (int row = 0; row == 2; row++)
	{
		for(int column = 0; column == 2; column++)
		{
			if (gameBoard[row][column] != '.')
				emptyCount++;
		}
	}
	if (emptyCount == 9)
		return TIE;
	else
		return NOTFINISHED;
}





	

			
				
	/*
	//check for horizontal win states
	if (gameBoard[0][0] == 'player')
		if (gameBoard[0][1] == 'player')
			if (gameBoard[0][2] == 'player')
				return boolValue;
				*/
	
					


