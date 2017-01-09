#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using namespace::std;

//Used for exercise 6.18
class matrix{};

//Exercise 6.10
void swap_int(int *const ip1, int *const ip2) {
	int temp = *ip2;
	*ip2 = *ip1;
	*ip1 = temp;
	cout << *ip1 << " " << *ip2 << endl;
}

//Exercise 6.11
void reset(double &d) {
	d = 0.0;
}

//Exercise 6.12
void swap_int_ref(int &i1, int &i2) {
	int temp = i2;
	i2 = i1;
	i1 = temp;
	cout << i1 << " " << i2 << endl;
}

//Exercise 6.16
//Make the parameter a (const string& s)
bool is_empty(string& s) { 
	return s.empty(); 
}

//Exercise 6.17
bool all_lower(const string& s) {
	for (const auto& x : s)
		if (isupper(x))
			return false;
	return true;
}

void to_lower(string& s) {
	//The const was dropped in the for-loop as well!
	for (auto& x : s)
		x = toupper(x);
}

//Exercise 6.18
bool compare(const matrix& m1, const matrix& m2);
vector<int>::iterator change_val(int i, vector<int>::iterator vi);

//Exercise 6.19
/*
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator,int);

vector<int> vec(10);

(a) Illegal: too many parameters
calc(23.4, 55.1);

(b) Legal: conversion from string literal to const string reference is available
count("abcda", 'a');

(c) Legal: conversion from int to double is available
calc(66);

(d) Legal: conversion from double to int is available, 3.8 will be truncated!
sum(vec.begin(), vec.end(), 3.8);
*/

//Exercise 6.21
int compare(const int i, const int * const j) {
	return i > *j ? i : *j;
}

//Exercise 6.22
//cfr exercise 6.10
void pointer_swap(const int* ip1, const int* ip2) {
	const int* temp = ip1;
	ip1 = ip2;
	ip2 = temp;
}

//Exercise 6.23
//confusing question: if they imply that both the int and the int[2] have to be possible parameters
//I see only this as an 'easy', and not completely correct, solution.
//If they imply that you should write different functions for both an int and an array, enjoy yourself...
void print(const int *const i, const size_t s = 1) {
	for (int j = 0; j < s; ++j)
		cout << *(i + j) << endl;
}

//Exercise 6.24
/* No compilation problems, but the input is in no way restricted to be an array of size 10.
One could pass a reference to a single int and that would be legal. The program would
show some undefined (i.e. bad) behaviour since ia[i] is not defined for an int.
void print(const int ia[10]) {
for (size_t i = 0; i != 10; ++i)
	cout << ia[i] << endl;
}*/

//Exercise 6.27
int sum_int(initializer_list<int> l) {
	int sum = 0;
	for (const auto& x : l)
		sum += x;
	return sum;
}

//Exercise 6.28
//String

//Exercise 6.29
//the items in the init_list are all constant so you would have to use a const reference.

int main() {
	int a = 10, b = 2;
	int c[3] = { 0 };
	print(&a);
	print(c,3);
	cout << sum_int({ 1,3,5 });

	return 0;
}