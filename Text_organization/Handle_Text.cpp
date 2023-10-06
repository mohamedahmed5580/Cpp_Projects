//
// Created by Specialist on 8/9/2023.
//

#include "Handle_Text.h"
#include <iostream>
#include "string.h"
using namespace std;
/*
    get the text from user .



 */


void Handle_Text::set_HandleText(string users) {
    Text_user=users;
}
string Handle_Text::get_HandleText() {
    for (int i = 0; i < Text_user.length(); ++i) {
        if (i==0){
           Final_Text += toupper(Text_user[i]);
        }else if(Text_user[i] == ' '){
            if (Text_user[i-1] == ' '){
                continue;
            } else{
                Final_Text+=Text_user[i];
            }
        }else{
            Final_Text += tolower(Text_user[i]);
        }
    }

    return Final_Text;
}
