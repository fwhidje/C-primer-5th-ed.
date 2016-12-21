#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace::std;

//Exercise 5.15
/*(a) Problem: ix exists only in the scope of the for-loop, it can't be used in the if-statement
for (int ix = 0; ix != sz; ++ix) { ... }
if (ix != sz)

(b) Problem: there is a missing semicolon after the (empty) init-statement (before the condition).
int ix;
for (ix != sz; ++ix) { ... }

(c) Problem: this loop wil never terminate (ix never catches up with sz). 
Whilst this behaviour might be intentional, it can be implemented in better and clearer ways.
for (int ix = 0; ix != sz; ++ix, ++sz) { ... }
*/

//Exercise 5.16
void different_loops() {
	//Case: while loop
	string s;
	while (cin >> s) {
		s[0] = toupper(s[0]);
		cout << s;
	}
	//'resets' cin, allowing the next loop to run
	cin.clear();

	for (string st; cin >> st; cout << st) {
		st[0] = toupper(st[0]);
	}

	//Case: for loop
	int ar[10] = { 1 };
	for (int *p = begin(ar); p != end(ar); ++p) {
		cout << *p;
	}

	int *p = begin(ar);
	while (p != end(ar)) {
		cout << *p;
		++p;
	}
}

//Exercise 5.17
//uses the algorithm::min(...) function
bool vect_prefix(vector<int> va, vector<int> vb) {
	for (vector<int>::size_type i = 0; i < min(va.size(), vb.size()); ++i)
		if (va[i] != vb[i])
			return false;
	return true;
}

int main() {
	different_loops();

	vector<int> va = { 0,1,1,2,3,5,8 };
	vector<int> vb = { 0,1,1 };
	cout << vect_prefix(va, vb);

	return 0;
}
