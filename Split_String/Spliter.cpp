//
// Created by Specialist on 9/6/2023.
//
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "Spliter.h"

vector <string> Spliter::Split(string T, string s) {
    for (int i = 0; i < T.size() ; ++i) {// 10,20,30 , ","
        string str(s.size(),T.at(i));
        if (str != s ){
            Text+=str;
        } else{
            Text_splited.push_back(Text);
            Text.clear();
        }
    }
    Text_splited.push_back(Text);

    return Text_splited;
}


