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
bool TicTacToe::check_board_full() const
{
    for(auto peg: pegs)
    {    
        if(peg == " ")
        {
            return false;
        }
        
    }
    return true;
}

// Check if you won via a columm
bool TicTacToe::check_column_win()
{
   
    return false;
}

// Check if you won via a row
bool TicTacToe::check_row_win()
{
    return false;
}


// Check if you won via a diagonal
bool TicTacToe::check_diagonal_win()
{
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
    if(game.pegs.size() == 9)
    {
        // Mark the board
        int position;
        
        cout<<"Please enter a position on the board. (1-9)\n";
        cout<<"1 being top left and 9 being bottom right: \n";

        // Validate if position is a number
        while (!(in>>position))
        {
            // Explain the error
            cout<<"ERROR: Please enter a numerical value: ";
            // Clear previous input
            in.clear();
            // Discard previous input
            in.ignore(123, '\n');
        }

        // Validate if position is less than 0 and greater than 9
        while (position <= 0 || position > 9)
        {
            cout<<"ERROR: Your position must be between 1 and 9.\n";
            cout<<"Please enter your position again: ";
            in>>position;
        }

        // Mark board only if postion is between 1 and 9
        if(position >= 1 && position <= 9)
        {
            // Call the mark_board tic tac toe class member function
	        game.mark_board(position);
        }
    }
    else if(game.pegs.size() == 16)
    {
        // Mark the board
        int position;
        
        cout<<"Please enter a position on the board. (1-16)\n";
        cout<<"1 being top left and 16 being bottom right: \n";

        // Validate if position is a number
        while (!(in>>position))
        {
            // Explain the error
            cout<<"ERROR: Please enter a numerical value: ";
            // Clear previous input
            in.clear();
            // Discard previous input
            in.ignore(123, '\n');
        }

        // Validate if position is less than 0 and greater than 9
        while (position <= 0 || position > 16)
        {
            cout<<"ERROR: Your position must be between 1 and 9.\n";
            cout<<"Please enter your position again: ";
            in>>position;
        }
        // Mark board only if postion is between 1 and 16
        if(position >=1 && position <= 16)
        {
            // Call the mark_board tic tac toe class member function
	        game.mark_board(position);
        }
    }
    
    

    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe &game)
{
    if(game.pegs.size() == 9)
    {
        // Code that displays the board
        for(std::size_t i = 0; (i < game.pegs.size()); i+=3)
        {
            out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";
        }
    }
    else if(game.pegs.size() == 16)
    {
        for(std::size_t n=0; n<game.pegs.size(); n+=4)
        {
            out<<game.pegs[n]<<"|"<<game.pegs[n+1]<<"|"<<game.pegs[n+2]<<"|"<<game.pegs[n+3]<<"\n";
        }
    }
    return out;
}
