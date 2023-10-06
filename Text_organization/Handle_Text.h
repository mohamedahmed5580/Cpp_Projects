//
// Created by Specialist on 8/9/2023.
//

#ifndef TEXT_ORGANIZATION_HANDLE_TEXT_H
#define TEXT_ORGANIZATION_HANDLE_TEXT_H
#include <iostream>
#include "vector"
using namespace std ;
#include <string>
class Handle_Text {
private:
    string Text_user;
    string Final_Text;

public:
    void set_HandleText(string user);
    string get_HandleText();

};



#endif //TEXT_ORGANIZATION_HANDLE_TEXT_H
