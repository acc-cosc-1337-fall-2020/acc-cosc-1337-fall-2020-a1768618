#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
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


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
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


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool TicTacToe3::check_diagonal_win()
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
