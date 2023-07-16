#include "XOClass.h"

void XOClass::replay() {
    cout << "do you play again (Y/N) ? " << endl;
    cin >> an;
    if (an == "y" || an == "Y") {
        board[0] = "1";
        board[1] = "2";
        board[2] = "3";
        board[3] =" 4";
        board[4] = "5";
        board[5] = "6";
        board[6] = "7";
        board[7] = "8";
        board[8] = "9";
        Play_game();
    }
}
void XOClass::game_board() {
    cout << "*******************" << endl;
    cout << "*  " << board[0] << "  *  " << board[1] << "  *  " << board[2] << "  *" << endl;
    cout << "*******************" << endl;
    cout << "*  " << board[3] << "  *  " << board[4] << "  *  " << board[5] << "  *" << endl;
    cout << "*******************" << endl;
    cout << "*  " << board[6] << "  *  " << board[7] << "  *  " << board[8] << "  *" << endl;
    cout << "*******************" << endl;

}
void XOClass::Play_game() {
    while (true) {
        if(board[0] == "1" || board[1] == "2" || board[2] == "3" || board[3] == "4" || board[4] == "5" || board[5] == "6" || board[6] == "7" || board[7] == "8" || board[8] == "9")
        {
            game_board();
            cout << "\nPlayer (X) : ";
            cin >> player1;
            while (board[stoi(player1) - 1] == "X" || board[stoi(player1) - 1] == "O"){
                cout << "\n-----------------------------------------------------------------" << endl;
                cout << "------------- This field is already reserved --------------------"<<endl;
                cout << "-----------------------------------------------------------------\n" << endl;
                game_board();
                cout << "\nPlayer (X) : ";
                cin >> player1;
            }
            board[stoi(player1) - 1] = "X";
            game_board();
            if ((board[0] == "X" && board[3] == "X" && board[6] == "X") || (board[1] == "X" && board[4] == "X" && board[7] == "X") || (board[2] == "X" && board[5] == "X" && board[8] == "X") || (board[0] == "X" && board[1] == "X" && board[2] == "X") || (board[3] == "X" && board[4] == "X" && board[5] == "X") || (board[6] == "X" && board[7] == "X" && board[8] == "X") || (board[0] == "X" && board[4] == "X" && board[8] == "X") || (board[2] == "X" && board[4] == "X" && board[6] == "X")) {
                cout << "--------------------------------------- { Player1 is Winer }--------------------------------------"<<endl;
                replay();
                break;

            }
            cout << "\nPlayer (O) : ";
            cin >> player2;
            while (board[stoi(player2) - 1] == "X" || board[stoi(player2) - 1] == "O"){
                cout << "\n-----------------------------------------------------------------" << endl;
                cout << "------------- This field is already reserved --------------------" << endl;
                cout << "-----------------------------------------------------------------\n" << endl;
                game_board();
                cout << "\n\nPlayer (O) : ";
                cin >> player2;
            }
            board[stoi(player2) - 1] = "O";
            if ((board[0] == "O" && board[3] == "O" && board[6] == "O") || (board[1] == "O" && board[4] == "O" && board[7] == "O") || (board[2] == "O" && board[5] == "O" && board[8] == "O") || (board[0] == "O" && board[1] == "O" && board[2] == "O") || (board[3] == "O" && board[4] == "O" && board[5] == "O") || (board[6] == "O" && board[7] == "O" && board[8] == "O") || (board[0] == "O" && board[4] == "O" && board[8] == "O") || (board[2] == "O" && board[4] == "O" && board[6] == "O")) {
                cout << "--------------------------------------- { Player2 is Winer }--------------------------------------" << endl;
                replay();
                break;
            }
        }else{
            game_board();
            cout << "                     This places is full"<<endl;
        }
    }
}
