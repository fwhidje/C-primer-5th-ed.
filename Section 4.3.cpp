#include <iostream>
using namespace::std;

//Exercise 4.10
void read_int() {
	int i;
	while (cin >> i && i != 42);
}

//Exercise 4.11
bool test_four(int a, int b, int c, int d) {
	return (a < b && b < c && c < d);
}

//Exercise 4.12
//The first two statements print 1, the third statement prints 0
void foo() {
	int i = 4, j = 4, k = 0;
	cout << (i != j < k);
	cout << (i != (j < k));
	cout << ((i != j) < k);
}

int main() {
	return 0;
}