#ifndef REPLACE_STRING_RESTRING_H
#define REPLACE_STRING_RESTRING_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class reString {
private:
    string word,word_r;
    vector <string> reWord;

public:
    void set_String(string s);
    string get_String();
    string print_string();

};


#endif //REPLACE_STRING_RESTRING_H
