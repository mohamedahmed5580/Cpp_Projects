#include <iostream>
#include <string>
#include <vector>
#include "Spliter.h"

using namespace std;


int main() {
    Spliter split;
    string target,delimiter;
    cout << "Enter the target: ";
    getline(cin,target) ;
    cout << "Enter the delimiter: ";
    getline(cin,delimiter) ;
    for (string str:split.Split(target, delimiter)) {
        cout << str <<endl;
    }


}
