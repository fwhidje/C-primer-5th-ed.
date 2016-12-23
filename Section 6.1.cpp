#include <iostream>
using namespace std;

//Exercise 6.2
/*
(a) Wrong return type
int f() {
	string s;
	// ...
	return s;
}

(b) No return type specified
f2(int i) { ... }

(c) missing a curly brace
int calc(int v1, int v1) ... }

(d) missing curly braces
double square(double x) return x * x; 
*/

//Exercise 6.3
int fact(int x) {
	int outp = 1;
	for (int i = 1; i <= x; ++i)
		outp *= i;
	return outp;
}

//Exercise 6.4
void user_fact() {
	cout << "Please provide an integer: "<<endl;
	int inp;
	cin >> inp;
	cout << inp << "! = " << fact(inp);
}

//Exercise 6.5
double absol(double x) {
	return (x > 0) ? x : -x;
}

//Exercise 6.7
void call_count() {
	static int count = 0;
	for (int i = 0; i < count; ++i) {
		cout << i;
	}
	cout << count++;
}

int main() {
	return 0;
}