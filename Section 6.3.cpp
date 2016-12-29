#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*Exercise 6.32
I see no problems.

int &get(int *arry, int index) { return arry[index]; }
int main() {
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;
}*/

//Exercise 6.33
void print_vec(vector<string> vec) {
	if (vec.size() > 1) {
		cout << *(vec.begin());
		print_vec(vector<string>(vec.begin() + 1, vec.end()));
	}
	else
		cout << *(vec.begin());
}

//Exercise 6.34
//You would multiply by zero, thus making the factorial zero

//Exercise 6.35
//If you would use val-- you would pass val to factorial, not val-1.
//If you were to use --val instead you would change the value of val,
//thus making the multiplication (factorial(val - 1) * val) undefined

//Exercise 6.36
string(&foo())[10];

//Exercise 6.37
typedef string (&tarr)[10];
tarr bar();

auto fob()->string(&)[10];

string(&arr)[10];
decltype(arr) bab();

//Exercise 6.37
//Changed * to & and removed the & before odd and even.
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) &arrPtr(int i){
	return (i % 2) ? odd : even;
}

int main() {
	print_vec({ "abc","def","ghi","jkl" });
	return 0;
}

