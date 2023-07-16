#include <iostream>
#include "Calculator.h";
using namespace std ;

int main() {

    Calculator c1;
    cout << c1.add("store","data") << endl;
    cout << c1.add(2,2) << endl;
    cout << c1.add(2,2,4) << endl;
    cout << c1.add(2,2,4,5) << endl;
    cout << c1.sub(2,2) << endl;
    cout << c1.sub(2,2,4) << endl;
    cout << c1.sub(2,2,4,5) << endl;
    cout << c1.power(2,6) << endl;
}
