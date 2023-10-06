#include <iostream>
#include <vector>
#include <string>
#include "reString.h"
using namespace std;
/*
    input string
    split a words with String
    check the wordsto find he or him
    convert the word (he to he or she) and (him to him or her)
 */

void reString::set_String(string s) {
    for (int i = 0; i < s.size(); ++i) {
        word_r+=s[i];
        if (s[i] == ' ' || s[i] == '.' ){
            reWord.push_back(word_r);
            word_r="";
        }
    }

}

string reString::get_String() {
    for (int g = 0; g < reWord.size(); ++g) {
        if (reWord.at(g)=="he" || reWord.at(g)=="he." || reWord.at(g)=="He"){
            reWord.at(g) = "he or she ";
        } else if (reWord.at(g)=="him" || reWord.at(g)=="him." || reWord.at(g)=="Him"){
            reWord.at(g) = "him or her.";
        }
    }
    for (int r = 0; r < reWord.size(); ++r) {
        cout <<  reWord.at(r);
    }
}
