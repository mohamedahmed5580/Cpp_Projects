#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include "School.h"
using namespace std;
int main() {
    School elsa3dia;
    int user_chose,beanch_num;
    string user_input,user_Chouse,Teacher_Course;

    while (true){
        elsa3dia.main_Show();
        cin >> user_chose;
        if(user_chose==1){
            cout << "Enter Name of Student: " ;
            cin >> user_input;
            cout << "Enter the Beanch num of Student: ";
            cin >> beanch_num;
            elsa3dia.set_student(user_input,beanch_num);
        } else if(user_chose == 2){
            cout << "Enter Name of the Teacher: " ;
            cin >> user_input;
            cout << "Enter Coursess of the Teacher: " ;
            cin >> Teacher_Course;
            elsa3dia.set_Teacher(user_input,Teacher_Course);
        } else if(user_chose == 3){
           elsa3dia.get_student();
        } else if(user_chose == 4){
            elsa3dia.get_Teacher();
        } else if(user_chose == 5){
            break;
        }
    }


}
