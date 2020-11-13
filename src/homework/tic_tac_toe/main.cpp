#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main() 
{
	unique_ptr<TicTacToe> game;
	TicTacToeManager manager;
	int size = 0;
	string player;

	char repeat;
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

		// Ask the user to choose
		while (size == 0)
		{
			cout<<"Eneter 3 or 4 if you want a 3X3 or 4X4 board: ";
			cin>>size;
			// Evaluate and dispaly boards
			if(size == 3)
			{
				game = make_unique<TicTacToe3>();
				cout<<*game;
			}	
			else if(size == 4)
			{
				game = make_unique<TicTacToe4>();
				cout<<*game;
			}
			else
			{
				cout<<"Invalid Input";
			}
		}

		// Start the game
		game->start_game(player);
		//Display the board when position is marked.
		cout<<"\n";

		do	
		{
			// Capure the position on the board
			cin>>*game;
			cout<<*game;

			if (game->game_over() == false)
			{
				// Display who the winner is
				cout<<"The player is: "<<game->get_player()<<"\n";
			}

		} while (game->game_over() == false);

		cout<<"The game is over!"<<"\n";
		int o;
		int x;
		int t;

		// Resets size back to 0
		size = 0;

		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"Do you want to play another game? (y/n): ";
		cin>>repeat;

	} while (repeat == 'Y' || repeat == 'y');

	// Display all the games played
	cout<<manager<<"\n";
	
	return 0;
}