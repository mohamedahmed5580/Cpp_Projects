#include <iostream>
#include "GPACalc.h"

using namespace std ;

float GPACalc::Num_of_hours=0;
float GPACalc::grades=0;

//float GPACalc::Num_of_Subjects=0;

float GPACalc::set_GPA_of_Subjects(float grade) {
    grades=grade;
}
float GPACalc::get_GPA_of_Subjects() {
    if(grades>89){
        return 4;
    } else if(grades > 84){
        return 3.7;
    }else if(grades > 79){
        return 3.3;
    }else if(grades > 74){
        return 3;
    }else if(grades > 69){
        return 2.7;
    }else if(grades > 64){
        return 2.4;
    }else if(grades > 59){
        return 2.2;
    }else if(grades > 49){
        return 2;
    } else{
        return 0;
    }
}

//float GPACalc::set_Subject(int num){
//    Num_of_Subjects+=num;
//}
//
//float GPACalc::get_Subject() {
//    return Num_of_Subjects;
//}

float GPACalc::set_Hours(float h) {
    Num_of_hours+=h;
}

float GPACalc::get_Hours() {
    return Num_of_hours;
}

float GPACalc::set_GPA(float tgpa ,float th) {
    GPA=tgpa/th;
}
float GPACalc::get_GPA() {
    return GPA;
}


