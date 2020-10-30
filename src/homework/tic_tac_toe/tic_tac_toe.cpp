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

// Fourth you show the board
void TicTacToe::display_board() const
{
    for(std::size_t i = 0; (i < pegs.size()); i+=3)
    {
        cout<< pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
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
            set_next_player();
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
void TicTacToe::set_winner()
{
    if(player == "x")
    {
        winner = "o";
    }
    else
    {
        winner = "x";
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