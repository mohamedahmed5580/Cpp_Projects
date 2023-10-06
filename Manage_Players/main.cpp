#include <iostream>
#include <string>
#include <vector>
#include "Mangement.h"
using namespace std;
int main() {
    Mangement football;
    int choice;
    while (true) {
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                football.add_players();
            case 2:
                football.show_players();
            case 3:
                football.find_players();
            case 4:
                break;
        }
    }
}