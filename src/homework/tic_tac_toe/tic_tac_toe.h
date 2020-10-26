//h
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

    // Private Member Functions
    void set_next_player();
    bool check_board_full();
    void clear_board() ;

public:
    // Public Member Functions
    bool game_over(); 
    string get_player() const
    { return player; }
    void start_game(string);
    void mark_board(int);
    void display_board() const;


};
