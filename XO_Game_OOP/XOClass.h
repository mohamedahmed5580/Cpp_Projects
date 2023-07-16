#ifndef XO_GAME_XOCLASS_H
#define XO_GAME_XOCLASS_H
using namespace std;
#include <iostream>
#include <string>


class XOClass {
private:
    string board[9] = { "1","2","3","4","5","6","7","8","9" };
    string player1, player2;
    string an;
public:
    void Play_game();
    void replay();
    void game_board();

};


#endif
