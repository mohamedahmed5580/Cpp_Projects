#include "Gates.h"
#include <iostream>

using namespace std;
Gates::Gates() {

//    cout << "Not Value"<<endl;
}
Gates::Gates(int l) : LogicOperator(l){
    cout << "Not Value"<<endl;

}
Gates::~Gates(){

}


bool Gates::Not(int i1){
    if((i1 ) == 1){
        LogicOperator=1;
        return  LogicOperator;
    }else{
        return LogicOperator;
    }

}
bool Gates::XNot(int i1){
        if((i1 ) == 0){
            LogicOperator=1;
            return  LogicOperator;
        }else{
            LogicOperator=0;
            return LogicOperator;
        }
    }
bool Gates::OR(int i1,int i2) {
        if ((i1 == 0 && i2 == 0)) {
            LogicOperator = 0;
            return LogicOperator;
        } else {
            LogicOperator = 1;
            return LogicOperator;
        }
    }
bool Gates::Xnor(int i1,int i2){
    if((i1== 0 && i2== 0) || (i1== 1 && i2== 1 ) ){
        LogicOperator=1;
        return  LogicOperator;
    }else{
        LogicOperator=0;
        return LogicOperator;
    }
}

bool Gates::Nor(int i1,int i2){
    if(i1== 0 && i2== 0  ){
        LogicOperator=1;
        return  LogicOperator;
    }else{
        LogicOperator=0;
        return LogicOperator;
    }
}

bool Gates::AND(int i1,int i2){
    if(i1== 1 && i2== 1){
        LogicOperator=1;
        return  LogicOperator;
    }else{
        LogicOperator=0;
        return LogicOperator;
    }
}
bool Gates::NAND(int i1,int i2){
    if(i1== 1 && i2== 1){
        LogicOperator=0;
        return  LogicOperator;
    }else{
        LogicOperator=1;
        return LogicOperator;
    }
}

bool Gates::Xor(int i1, int i2) {

    if(i1== 0 && i2== 0  ){
        LogicOperator=1;
        return  LogicOperator;
    }else{
        LogicOperator=0;
        return LogicOperator;
    }
}
int Gates::getValue() {
    return LogicOperator;
}
