#include <iostream>
#include <vector>
using namespace std;

//Exercise 6.54
int func54(int a, int b);
vector<int(*)(int a, int b)> vec;

//Exercise 6.55a
int add(int a, int b) {
	return a + b;
}
int subs(int a, int b) {
	return a - b;
}
int mult(int a, int b) {
	return a*b;
}
int divid(int a, int b) {
	return a / b;
}

//Exercise 6.56
void func(int x, int y) {
	for (int(*const fp)(int a, int b) : vec) {
		cout << fp(x, y) << endl;
	}
}

int main() {
	//Exercise 6.55b
	vec.push_back(add);
	vec.push_back(subs);
	vec.push_back(mult);
	vec.push_back(divid);

	func(10,3);
	
	return 0;
}

