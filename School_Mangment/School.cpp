//
// Created by Specialist on 8/19/2023.
//

#include "School.h"
#include <map>
unordered_map <string ,int > School::Name_All;
unordered_map <string ,string > School:: Course_All;
void School::main_Show() {
    cout << "---------------------------------------------" <<endl;
    cout << "Welcome in the School." <<endl;
    cout << "1 - To Add a Student ." <<endl;
    cout << "2 - To Add a Teacher ." <<endl;
    cout << "3 - To Show a Student ." <<endl;
    cout << "4 - To Show a Teacher ." <<endl;
    cout << "5 - To Exist ." <<endl;
    cout << "---------------------------------------------" <<endl;
}

void School::set_student(string name, int b) {
    Sname=name;
    bench=b;
    Name_All.insert({Sname,bench});
}


string School::get_student() {
    for(const auto& name : Name_All ){
        cout << "Name: " << name.first << "\t"<<"bench: "<<name.second<<endl;
    }
}


void School::set_Teacher(string name, string course) {
    Tname=name;
    Corurses=course;
    Course_All.insert({Tname, Corurses});
}

string School::get_Teacher() {

    for (const auto& name : Course_All) {
        cout << "-------------------------------------------------------------"<<endl;
        cout << "THe Name of Teacher: ";
        cout << name.first<<endl;
        cout << "THe Courses of Teacher: ";
        cout << name.second<<endl;
    }

}



