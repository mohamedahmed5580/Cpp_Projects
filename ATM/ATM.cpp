#include <iostream>
using namespace std;
#include "ATM.h"



void ATM::setMenu() {
    cout << "1- See The Balance : " <<endl;
    cout << "2- Add Balance : "<<endl;
    cout << "3- withdrawal: "<<endl;
    cout << "4- Exit. "<<endl;

}
void ATM::setIMony(int u) {
    Mony+=u;
}


int ATM::getMony() {
    return Mony;
}

void ATM::setwithdrawalMony(int n) {
    Mony-=n;

}
void ATM::Exit() {
    cout<< "Thank You.";

}
void ATM::reStart() {
    int m;
    cout << "Do you want do any thing more (Y=1/N=0)? "<<endl ;
    cin >> m;
    if (m){
        setMenu();
        cin >>m;
        getMenu(m);
    } else{
        cout << "Thank You.";
    }
}
void ATM::getMenu(int n) {
    if(n==1){
        cout << "You have a "<< getMony()<<"$."<<endl;
        reStart();

    } else if(n==2){
        cout << "Add Balance : ";
        cin >> m;
        setIMony(m);
        reStart();

    } else if (n==3){
        cout << "Withdrawal Number: ";
        cin >> m;
        setwithdrawalMony(m);
        reStart();

    } else if (n==4){
        Exit();
    }


}











