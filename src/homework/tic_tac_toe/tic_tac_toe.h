//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::string;
using std::vector;

class TicTacToe
{
private:
    // Private Member Varibles
    string player;
    vector<string> pegs{9, " "}; // write code later to initialize 9 " "(spaces)

    string winner;  // Stores the winner of the game X, O or C.

    // Private Member Functions
    void set_next_player();
    bool check_board_full();
    void clear_board();
    	
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

public:
    // Public Member Functions
    bool game_over(); 
    string get_player() const {return player;}
    void start_game(string);
    void mark_board(int);
    void display_board() const;

    string get_winner(){return winner;}

};

#endif