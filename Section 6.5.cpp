#include <iostream>
#include <vector>
#include <string>
#define NDEBUG
using namespace::std;

//Exercise 6.40
/*
(a) Ok
int ff(int a, int b = 0, int c = 0);

(b) Error: a default-argument has to be either the last argument in the list
of has to be followed by a default-argument
char *init(int ht = 24, int wd, char bckgrnd);
*/

//Exercise 6.41
/*
char *init(int ht, int wd = 80, char bckgrnd = ' ');

(a) Error: at least one int-argument has to be supplied for the ht parameter
init();

(b) Ok
init(24,10);

(c) Unintended behaviour: this function passes 14 to ht (Ok), and then passes '*' to wd.
Although a conversion from char to int exists, it seems likely that init(14,80,'*') was intended.
init(14, '*');
*/

//Exercise 6.42
string make_plural(size_t ctr, const string &word, const string &ending = "s"){
	return (ctr > 1) ? word + ending : word;
}

//Exercise 6.44
inline bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}

//Exercise 6.46
//Not that I know: <string> items aren't literal type, so the parameters
//of isShorter don't meet the restrictions for a constexpr.

//Exercise 6.47
void print_vec_debug(vector<string> vec) {
#ifndef NDEBUG
	cerr <<" " << __func__ << " " << vec.size() << endl;
#endif
	if (vec.size() > 1) {
		cout << *(vec.begin());
		print_vec_debug(vector<string>(vec.begin() + 1, vec.end()));
	}
	else
		cout << *(vec.begin());
}

int main() {

	return 0;
}