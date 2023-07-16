//
// Created by Specialist on 6/29/2023.
//

#ifndef GPACALCLUTOR_GPACALC_H
#define GPACALCLUTOR_GPACALC_H

using namespace std;

class GPACalc {
private:
    float GPA;
    static  float Num_of_hours,grades;
public:
    /* start getting subjects*/
    float set_Subject(float num);
    float get_Subject();

    /* end getting subjects*/
    /////////////////////////////////////////////
    /* start getting hours*/
    float set_Hours(float h);
    float get_Hours();
    /* end getting hours*/
    /////////////////////////////////////////////
    /* start getting Grades*/
    float set_GPA_of_Subjects(float grade);
    float get_GPA_of_Subjects();
    /* end getting Grades*/
    /*start get a final grate*/
    float set_GPA(float gpa,float th);
    float get_GPA();
    /*end get a final grate*/


};


#endif //GPACALCLUTOR_GPACALC_H
