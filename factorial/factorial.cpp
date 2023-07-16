
#include <iostream>
using namespace std;
int main(){
    int i, factorial;
    cout << "Enter your nam: ";
    cin >> factorial;
    for (int i = 1; i <= factorial; i++) {
        if (factorial % i == 0) {
            cout << i<< "\t";
        }
    }
}