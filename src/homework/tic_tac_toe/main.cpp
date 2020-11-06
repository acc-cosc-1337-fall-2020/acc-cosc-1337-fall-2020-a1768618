#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
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
		
		// Diplays the board the first time
		cout<<game;

		do
		{
			// Capure the position on the board
			cin>>game;

			if (game.game_over() == true)
			{
				// Display who the winner is
				cout<<"The winner is: "<<game.get_winner()<<"\n";
			}
			
		} while (game.game_over() == false);

		int o;
		int x;
		int t;

		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"Do you want to play another game? (y/n): ";
		cin>>repeat;

	} while (toupper(repeat) == 'Y');

	// Display all the games played
	cout<<"\n"<<manager;
	
	return 0;
}