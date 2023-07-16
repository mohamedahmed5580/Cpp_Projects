//
// Created by Specialist on 6/17/2023.
//
#include <iostream>
#ifndef FIRSTOOPPROOJECT_GATES_H
#define FIRSTOOPPROOJECT_GATES_H

using namespace std;


class Gates {
private:
    int LogicOperator=0;

public:
    bool Not(int i1);
    bool XNot(int i1);
    bool OR(int i1,int i2);
    bool Nor(int i1,int i2);
    bool Xnor(int i1,int i2);
    bool Xor(int i1,int i2);
    bool AND(int i1,int i2);
    bool NAND(int i1,int i2);
    int getValue();
    Gates();
    Gates(int l);
    ~Gates();
};


#endif//FIRSTOOPPROOJECT_GATES_H
