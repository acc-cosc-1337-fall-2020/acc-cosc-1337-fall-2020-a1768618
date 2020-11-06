//cpp
#include "tic_tac_toe.h"
// First you get the players 

// Second you start the game.
void TicTacToe::start_game(string first_player)
{   
    // Select to be either an x or an o
    player = first_player;
    clear_board();
   
}

// Third you set the next player
void TicTacToe::set_next_player()
{
    if(player == "x")
    {
        player = "o";
    }
    else
    {
        player = "x";
    }  
}

// Fifth you mark your position and take turns
void TicTacToe::mark_board(int position)
{
    do
    {
        if(pegs[position - 1] == " ")
        {
            pegs[position - 1] = player;
            if (game_over() ==  false)
            {
                set_next_player();
            }
            
        }
        else
        {
            cout<<"Position already played\n";
        }
    } while (pegs[position - 1] == " ");
        
}



// Sixth you check if the board is full
bool TicTacToe::check_board_full()
{
    for(std::size_t i = 0; i < pegs.size(); i++)
    {    
        if(pegs[i] == " ")
        {
            return false;
            break;
        }
        
    }
    return true;
}

// Check if you won via a columm
bool TicTacToe::check_column_win()
{
    for (std::size_t i = 0; i < 3; i++)
    {
        if (pegs[i] == "x" && pegs[i+3] == "x" && pegs[i+6] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+3] == "o" && pegs[i+6] == "o")
        {
            return true;
        }
    } 
    return false;
}

// Check if you won via a row
bool TicTacToe::check_row_win()
{
    for (std::size_t i = 0; i < pegs.size(); i+=3)
    {
        if (pegs[i] == "x" && pegs[i+1] == "x" && pegs[i+2] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+1] == "o" && pegs[i+2] == "o")
        {
            return true;
        }
    } 
    return false;
}


// Check if you won via a diagonal
bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "x" && pegs[4] == "x" && pegs[8] == "x")
    {
        return true;
    }
    else if(pegs[0] == "o" && pegs[4] == "o" && pegs[8] == "o")
    {
        return true;
    }
    else if(pegs[2] == "x" && pegs[4] == "x" && pegs[6] == "x")
    {
        return true;
    }
    else if(pegs[2] == "o" && pegs[4] == "o" && pegs[6] == "o")
    {
        return true;
    }
    return false;
}
    
// Set who the winner is
void const TicTacToe::set_winner()
{
    if(player == "x")
    {
        winner = "x";
    }
    else
    {
        winner = "o";
    }
}

// Seventh you clear the board
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }

}

// Eigth you check if the game is over
bool TicTacToe::game_over()
{
    
    // Updated to check for row, column, and diagonal wins
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "c";
        return true;
    }
    return false;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    // Mark the board
	int position;
    cout<<"Please enter a position on the board. (1-9)\n";
	cout<<"1 being top left and 9 being bottom right: \n";
	//cin>>position;

	// Validate if position is a number
	while (!(in>>position))
	{
		// Explain the error
		cout<<"ERROR: Please enter a number (1-9): ";

		// Clear previous input
		in.clear();

		// Discard previous input
		in.ignore(123, '\n');
	}
			
	// Validate if position is less then or equal to 0
	while (position <= 0 || position > 9)
	{
		cout<<"ERROR: Your position must be between 1 and 9.\n";
		cout<<"Please enter your position again: ";
		in>>position;
	}

    // Call the mark_board tic tac toe class member function
	game.mark_board(position);

    //Display the board when position is marked.
    cout<<game;

    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    // Code that displays the board
    for(std::size_t i = 0; (i < game.pegs.size()); i+=3)
    {
        out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
    }

    return out;
}
