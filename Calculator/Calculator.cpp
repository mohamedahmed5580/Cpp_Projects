//
// Created by Specialist on 6/18/2023.
//
#include <iostream>
#include "Calculator.h"
#include <cmath>

using namespace std;

int Calculator::add(int n1, int n2) {
    return n1+n2;
}

int Calculator::add(int n1, int n2, int n3) {
    return n1+n2+n3;
}

int Calculator::add(int n1, int n2, int n3, int n4) {
    return n1+n2+n3+n4;
}

string Calculator::add(string s1, string s2) {
    return s1 + " " + s2;
}

int Calculator::power(int n1, int n2) {
    return pow(n1,n2);
}

int Calculator::sub(int n1, int n2) {
    return n1 - n2;
}

int Calculator::sub(int n1, int n2, int n3) {
    return  n1 - n2 -  n3;
}

int Calculator::sub(int n1, int n2, int n3, int n4) {
    return  n1 - n2 -  n3 - n4;
}
