//h
#include <string>
#include <vector>
#include <iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cout;
using std::string;
using std::vector;

class TicTacToe
{

public:
    // Create a constructor with an int parameter named size.
    TicTacToe(){};
    TicTacToe(unsigned int size) : pegs{size*size, " "}{}
    TicTacToe(vector<string> p, string win) : pegs(p), winner(win){}

    // Public functions
    bool game_over();
    void mark_board(int position);
    void start_game(std::string first_player);
    //void display_board()const;
    string get_player()const{return player;}
    string get_winner()const {return winner;}
    vector<string> get_pegs()const{return pegs;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    // Protected member variables
    vector<string> pegs{};

    // Protected virtual member functions
    virtual bool check_column_win()const = 0;
    virtual bool check_row_win()const = 0;
    virtual bool check_diagonal_win()const = 0;

private:
    // Private Member Varibles
    string player;
    string winner;  // Stores the winner of the game X, O or C.

    // Private Member Functions
    void set_next_player();
    bool check_board_full()const;
    void clear_board();    
    void set_winner();






};

#endif