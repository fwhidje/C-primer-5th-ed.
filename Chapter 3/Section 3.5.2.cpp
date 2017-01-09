#include <iterator>
#include <iostream>
#include <vector>

using namespace::std;


//Exercise 3.30
void foo() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	//when ix == 10, ia[ix] will be out of bound.
	// (size_t ix = 0; ix < array_size; ++ix) would be a solution
	for (size_t ix = 1; ix <= array_size; ++ix)
		ia[ix] = ix;
}



//Exercise 3.31
//Due to limitations (cannot return an 'array'-type item) I've created a function
//that takes pointers to the first and last items of the array.
void array_gen(int* b, int* e) {
	for (int* a = b, t = 0; a != e; ++a)
		*a = t++;
}

//Exercise 3.32
//cfr. the previous exercise
//Copies array1 into array2 until either a1 or a2 has reached the end of the array.
void copy_array(int* b1, int* e1, int* b2, int* e2) {
	for (int* a1 = b1, *a2 = b2; a1 != e1 && a2 != e2; ++a1, ++a2)
		*a2 = *a1;
}

//Exercise 3.32 b
typedef vector<int>::iterator it;
void copy_vect(it b1, it e1, it b2, it e2) {
	for (it a1 = b1, a2 = b2; a1 != e1 && a2 != e2; ++a1, ++a2)
		*a2 = *a1;
}


int main() {
	int temp[10];
	array_gen(begin(temp), end(temp));
	for (const auto& x : temp)
		cout << x << ' ';
	cout << endl;

	int temp2[10] = {};
	copy_array(begin(temp), end(temp), begin(temp2), end(temp2));
	for (const auto& x : temp2)
		cout << x << ' ';
	cout << endl;

	vector<int> v1 = { 1, 2, 3, 4, 5 };
	vector<int> v2 = { 0, 0, 0, 0, 0, 0};
	copy_vect(v1.begin(), v1.end(), v2.begin(), v2.end());
	for (const auto& x : v2)
		cout << x << ' ';
	cout << endl;

	return 0;
}
