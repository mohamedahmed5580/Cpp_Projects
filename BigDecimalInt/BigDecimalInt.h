//
// Created by Specialist on 9/20/2023.
//

#ifndef BIGDECIMALINT_BIGDECIMALINT_H
#define BIGDECIMALINT_BIGDECIMALINT_H
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

#include <iostream>
#include <string>

class BigDecimalInt {
private:
    int x,y;

public:
    BigDecimalInt(int x,int y);
    BigDecimalInt operator++();
    void show();

};
#endif //BIGDECIMALINT_BIGDECIMALINT_H
