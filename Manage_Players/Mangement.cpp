//
// Created by Specialist on 9/9/2023.
//
#include <string>
#include <iostream>
#include <vector>
#include "Mangement.h"

Mangement::Mangement() {
    players.push_back({"Alice", 5});
    players.push_back({"Bob", 7});
    players.push_back({"Charlie", 3});
    players.push_back({"David", 5});
    players.push_back({"Eve", 7});
    players.push_back({"Frank", 3});
    players.push_back({"Alice", 5});
    players.push_back({"Bob", 7});
    players.push_back({"Charlie", 3});
    players.push_back({"David", 5});
    players.push_back({"Eve", 7});
    players.push_back({"Frank", 3});

    cout <<"High Scores Program" << endl;
    cout << "1. Add new score" << endl;
    cout << "2. Print scores" << endl;
    cout << "3. Find score" << endl;
    cout << "4. Exit" << endl;
}

void Mangement::show_players() {
    cout << "The Count of players is : ";cout <<  players.size()<< endl;
    cout << "---------------------Top 10 Players---------------------"<<endl;
    for (int i=0; i<players.size(); ++i) {
        if (players.at(i).bill)
        cout << "Name: "<< players.at(i).name<<endl;
        cout << "Bills: "<< players.at(i).bill<<endl;
    }
    cout << "-----------------------------------------------------"<<endl;
}

void Mangement::add_players() {
    cout << "Enter The name : ";
    cin >> name;
    cout << "Enter The bill : ";
    cin >> bill;
    players.push_back({name,bill});
}

void Mangement::find_players() {
    cout << "Enter The name : ";
    cin >> name;


    for (int i = 0; i < players.size(); ++i) {
        if (players.at(i).name == name ){
            cout << "Name: "<< players.at(i).name<<"\t";
            cout << "Bills: "<< players.at(i).bill<<endl;
        }
    }
}
