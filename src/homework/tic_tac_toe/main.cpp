#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main() 
{
	TicTacToe game;
	string player;

	// Prompt the user for first player
	cout<<"Please enter x or o: ";
	cin>>player;

	// Start the game
	game.start_game(player);
	
	cout<<"\n\n\n";

	// Display the starting board
	game.display_board();

	// Mark the board
	int position;
	do
	{
		cout<<"Please enter a position on the board.\n";
		cout<<"1, 2, 3, 4, 5, 6, 7, 8, or 9: \n";
		cin>>position;

		// Call the mark_board tic tac toe class member function
		game.mark_board(position);
		game.display_board();

	} while (position <= 8);
	


	return 0;
}