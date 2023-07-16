//
// Created by Specialist on 6/18/2023.
//
using namespace std;
#include <string>
#ifndef UCALCULATOR_CALCULATOR_H
#define UCALCULATOR_CALCULATOR_H


class Calculator {
private:
    int sum;

public:
    string add(string n1,string n2);
    int add(int n1,int n2);
    int add(int n1,int n2,int n3);
    int add(int n1,int n2,int n3,int n4);
    int sub(int n1 ,int n2);
    int sub(int n1,int n2,int n3);
    int sub(int n1,int n2,int n3,int n4);
    int power(int n1,int n2);
    int su(int n1,int n2);
};


#endif //UCALCULATOR_CALCULATOR_H
