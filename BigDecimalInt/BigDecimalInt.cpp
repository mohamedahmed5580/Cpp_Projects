//
// Created by Specialist on 9/20/2023.
//

#include "BigDecimalInt.h"
#include <iostream>
#include <string>
using namespace std;

BigDecimalInt BigDecimalInt::operator++() {
    x+=5;
    y+=5;
    return *this;
}

BigDecimalInt::BigDecimalInt(int x,int y){
    this -> x=x;
    this -> y=y;
}

void BigDecimalInt::show() {
    cout <<x<<" "<< y<<endl;
}
