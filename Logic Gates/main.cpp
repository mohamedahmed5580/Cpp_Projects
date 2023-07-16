#include <iostream>
//#include <string>
#include "Gates.h"
using namespace std;

int main() {
        Gates gate;
        cout << gate.Not( 1) <<endl;
        cout << gate.XNot( 1) <<endl;
        cout << gate.OR( 1,0) <<endl;
        cout << gate.Nor( 0,0) <<endl;
        cout << gate.Xnor( 1,1) <<endl;

}

