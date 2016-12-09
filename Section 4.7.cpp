#include <iostream>
#include <vector>
#include <string>
using namespace::std;

//Exercise 4.21
void double_odd(vector<int>& vec) {
	for (auto& x : vec)
		x += (x & 1) ? x  : 0;
}

//Exercise 4.22
void grade_print(const int gr) {
	cout << ((gr > 90) ? "high pass" : (gr > 75) ? "pass" :
		(gr > 60) ? "low pass" : "fail") << endl;
}

//Exercise 4.22 b
void grade_print2(const int gr) {
	if (gr > 90)
		cout << "high pass";
	else if (gr > 75)
		cout << "pass";
	else if (gr > 60)
		cout << "low pass";
	else
		cout << "fail";
}

//Exercise 4.23
void foo() {
	string s = "word";
	string pl = s + ((s[s.size() - 1] == 's') ? "" : "s");
}

int main() {
	vector<int> v = { 4,2,3,9,8,5,1,4 };
	double_odd(v);
	for (const auto& x : v)
		cout << x << ' ';
	cout << '\n';

	grade_print(92);
	grade_print(80);
	grade_print(70);
	grade_print(50);
	return 0;
}