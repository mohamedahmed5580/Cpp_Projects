#include <iostream>
#include <string>
#include "reString.h"
/*
    input string
    split a words with String
    check the wordsto find he or him
    convert the word (he to he or she) and (him to him or her)
 */
using namespace std;
int main() {
    reString strinng;
    string st;
    cin >> st;
    strinng.set_String(st);
    strinng.get_String();
    return 0;
}
