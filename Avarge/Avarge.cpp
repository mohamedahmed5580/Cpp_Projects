#include <iostream>
using namespace std;
int main() {
	int sum, sum1,c,i, avarge;
	sum1 = 0;
	c = 0;
	cout << "What do you wont calc : ";
	cin >> sum;
	for (int i=0; i < sum; i++) {
		cout << "Enter any num : ";
		cin >> sum1;
		c += sum1;
	}
	avarge = c / sum;
	cout << "The avarge is "<< avarge;
}