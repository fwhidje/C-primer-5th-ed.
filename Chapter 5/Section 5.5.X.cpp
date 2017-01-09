#include <iostream>
#include <string>
#include <vector>
using namespace::std;

//Exercise 5.20
void check_repeat() {
	string s, prev;
	bool found = false;
	while (cin >> s) {
		if (s == prev) {
			found = true;
			break;
		}
		prev = s;
	}
	cout << (found ? s : "No repeat found.");
}

//Exercise 5.21
void check_repeat_up() {
	string s, prev;
	bool found = false;
	while (cin >> s) {
		if (s == prev) {
			if (!isupper(s[0]) && !isupper(prev[0]))
				continue;
			found = true;
			break;
		}
		prev = s;
	}
	cout << (found ? s : "No repeat found.");
}

//Exercise 5.22
/*
int sz;
do{
	sz = get_size()
} while(sz <= 0)
*/

int main() {
	check_repeat_up();
	return 0;
}