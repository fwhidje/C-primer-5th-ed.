#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace::std;

//Exercise 5.18
/*(a) Problem: the body isn't in a block
do
	int v1, v2;
	cout << "Please enter two numbers to sum:" ;
	if (cin >> v1 >> v2)
	cout << "Sum is: " << v1 + v2 << endl;
while (cin);

(b) Problem: cannot define varaibles in the condition
do {...} 
while (int ival = get_response());
	
(c) Problem: variables used in the condition have to be defined outside of the body of the do while statement
do {
	int ival = get_response();
} while (ival);
*/

//Exercise 5.19
void test_length() {
	string a, b, c;
	do {
		cout << "Please enter two strings: ";
		cin >> a >> b;
		cout << "This is the longest string: ";
		cout << ((a.length() == b.length()) ? ("they have the same length.") : 
			((a.length() >= b.length()) ? a : b )) << endl;
		cout << "Continue? y/n";
		cin >> c;
	} while (cin && c[0] != 'n');
}

int main() {
	test_length();
}
