//h
#include "tic_tac_toe.h"
#include<fstream>
#include<memory>
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

using std::vector;
using std::unique_ptr;
using std::make_unique;
using std::string;

class TicTacToeData
{
public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector<unique_ptr<TicTacToe>> get_games();

private:
    const string file_name{"tic_tac_toe_data.dat"};
};

#endif