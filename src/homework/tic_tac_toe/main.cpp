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

		
		do
		{
			
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