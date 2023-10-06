//
// Created by Specialist on 9/9/2023.
//

#ifndef MANAGE_PLAYERS_MANGEMENT_H
#define MANAGE_PLAYERS_MANGEMENT_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Mangement {
    private:
        struct list{
            string name;
            int bill;
        };
        vector<list> players;
        string name;
        int bill;
    public:
        void show_players();
        void add_players();
        void find_players();
    Mangement();


};


#endif //MANAGE_PLAYERS_MANGEMENT_H
