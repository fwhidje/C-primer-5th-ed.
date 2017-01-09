#include <iostream>
using namespace::std;

//Exercise 4.4
void eval() {
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
	cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << endl;
}

//Exercise 4.6
bool is_odd(const int i) {
	return i % 2;
}

 //Exercise 4.6 - variation
bool is_odd2(int i) {
	return (i & 1);
}

//Exercise 4.7
void overflow() {
	unsigned short i = 65535;
	short j = i;
	cout << "unsigned short i: " << i << ", short j = i: " << j << endl;
	unsigned short k = i + 1;
	cout << "unsigned short i: " << i << ", unsigned short k = i + 1: " << k << endl;
}


int main() {
	eval();
	cout << is_odd2(3);
	overflow();
}
