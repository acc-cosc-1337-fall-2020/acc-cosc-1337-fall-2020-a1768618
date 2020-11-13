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
    string winner;  // Stores the winner of the game X, O or C.

    // Private Member Functions
    void set_next_player();
    bool check_board_full() const;
    void clear_board();
    void const set_winner();

protected:
    // Protected member variables
    vector<string> pegs;

    // Protected virtual member functions
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();


public:
    // Create a constructor with an int parameter named size.
    TicTacToe() = default;
    TicTacToe(int size) : pegs(size*size, " "){}
    // Public Member Functions
    bool game_over(); 
    string get_player() const {return player;}
    void start_game(string);
    void mark_board(int);

    string get_winner() const {return winner;}

    // Operator Overloads
    friend std::istream& operator>>(std::istream&, TicTacToe &); 
    friend std::ostream& operator<<(std::ostream&, const TicTacToe &);

};

#endif