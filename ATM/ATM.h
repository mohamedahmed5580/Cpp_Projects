#include <iostream>
#ifndef ATM_ATM_H
#define ATM_ATM_H
using namespace std;

class ATM {
private:
    int Mony=0,m;
    int ATM[];
    void reStart(int n);

public:
    void setMenu();
    void getMenu(int n);
    void setIMony(int u);
    void setwithdrawalMony(int n);
    int getMony();
    void Exit();
    void reStart();
};


#endif //ATM_ATM_H
