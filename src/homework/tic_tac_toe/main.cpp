#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main() 
{
	TicTacToe game;
	string player;
	char repeat = 'y';

	do
	{
		// Prompt the user for first player
		cout<<"Please enter x or o: ";
		cin>>player;

		// Validate player
		while ((player != "x") && (player != "o"))
		{
			cout<<"Please only enter an 'x' or an 'o': ";
			cin>>player;
		}

		// Start the game
		game.get_player();
		game.start_game(player);
		cout<<"\n";

		// Display the starting board
		game.display_board();

		// Mark the board
		int position;
		do
		{
			cout<<"Please enter a position on the board. (1-9)\n";
			cout<<"1 being top left and 9 being bottom right: \n";
			//cin>>position;

			// Validate if position is a number
			while (!(cin>>position))
			{
				// Explain the error
				cout<<"ERROR: Please enter a number (1-9): ";

				// Clear previous input
				cin.clear();

				// Discard previous input
				cin.ignore(123, '\n');
			}
			
			// Validate if position is less then or equal to 0
			while (position <= 0 || position > 9)
			{
				cout<<"ERROR: Your position must be between 1 and 9.\n";
				cout<<"Please enter your position again: ";
				cin>>position;
			}
			
			// Call the mark_board tic tac toe class member function
			game.mark_board(position);
			game.display_board();
			if (game.game_over() == true)
			{
				// Display who the winner is
				cout<<"The winner is: "<<game.get_winner()<<"\n";
			}
			
		} while (game.game_over() == false);

		cout<<"Do you want to play another game? (y/n): ";
		cin>>repeat;
	} while (toupper(repeat) == 'Y');
	
	return 0;
}