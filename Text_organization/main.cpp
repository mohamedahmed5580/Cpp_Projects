#include <iostream>
using namespace std;
#include "Handle_Text.h"
int main() {
    Handle_Text text;
    text.set_HandleText("the                                        Answer    to    life,    the     Universe, and everything IS 42.");
    cout << text.get_HandleText();


}
