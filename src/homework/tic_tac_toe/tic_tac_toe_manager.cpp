//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "x")
    {
        x_win += 1;
    }
    else if(winner == "o")
    {
        o_win +=1;
    }
    else
    {
        tie += 1;
    }
    
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = tie;

    cout<<"o wins: "<< o << " x wins: " << x << " ties: "<< t <<"\n";
}

ostream& operator<<(std::ostream& out, const TicTacToeManager &manager)
{
    for (auto &b: manager.games)
    {
        out<<*b;
        out<<"Winner is: "<<b->get_winner()<<"\n";
    } 


    return out;
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    
}