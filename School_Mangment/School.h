//
// Created by Specialist on 8/19/2023.
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;
#ifndef SCHOOL_MANGMENT_SCHOOL_H
#define SCHOOL_MANGMENT_SCHOOL_H


class School {

private:
    static unordered_map <string ,int> Name_All;
    static unordered_map <string ,string> Course_All;
    string Sname,Tname,Corurses;
    int bench;
public:
    void set_student(string name,int b);
    string get_student();
    void set_Teacher(string name,string course);
    string get_Teacher();
    static void main_Show();

};


#endif //SCHOOL_MANGMENT_SCHOOL_H
