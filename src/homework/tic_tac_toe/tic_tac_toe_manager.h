//h
#include "tic_tac_toe.h"
#include <vector>
#include <iostream>
#include <memory>
#include <utility>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::vector;
using std::ostream;
using std::unique_ptr;
using std::make_unique;

class TicTacToeManager
{
private:
    vector<unique_ptr<TicTacToe>> games;

    // Initializes the initial winner counts
    int o_win = {0};
    int x_win = {0};
    int tie = {0};

    void update_winner_count(string);

public:
    void save_game(unique_ptr<TicTacToe> &b);
    void get_winner_total(int&, int&, int&);
    friend std::ostream& operator<<(std::ostream&, const TicTacToeManager &);
    
    
};

#endif