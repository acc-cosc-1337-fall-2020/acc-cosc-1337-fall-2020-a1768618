//cpp
#include "tic_tac_toe.h"
// First you get the players 

// Second you start the game.
void TicTacToe::start_game(string x)
{   
    // Select to be either an x or an o
    player = x;
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
    for(size_t i = 0; (i < pegs.size()); i+=3)
    {
        cout<< pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
   
}

// Fifth you mark your position and take turns
void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

// Sixth you check if the board is full
bool TicTacToe::check_board_full()
{
    for (size_t i = 0; i < pegs.size(); i++)
    {    
        if (pegs[i] == " ")
        {
            return false;
            break;
        }
        
    }
    return true;
}

// Seventh you clear the board
void TicTacToe::clear_board() const
{
    vector<string> pegs(9, string(" "));

}

// Eigth you check if the game is over
bool TicTacToe::game_over()
{
    return check_board_full();
}