#include <iostream>
#include "GPACalc.h"
using namespace std;
int main() {
    GPACalc GPAS;
    float Subjects,hours,num_of_sub,total_of_sub;
    cout << "How many subjects do you want to count? ";
    cin  >> num_of_sub;

    for (int i = 0; i < num_of_sub; ++i) {
        cout << "Enter grade of Subject "<<i+1<<": ";
        cin >> Subjects;
        GPAS.set_GPA_of_Subjects(Subjects);
        //###################################################################################
        cout << "Enter hour of Subject "<<i+1<<": ";
        cin >> hours;
        GPAS.set_Hours(hours);
        //###################################################################################
        total_of_sub+=GPAS.get_GPA_of_Subjects()*hours;
        cout << endl;
    }

    GPAS.set_GPA(total_of_sub,GPAS.get_Hours());
    cout << GPAS.get_GPA();
}
