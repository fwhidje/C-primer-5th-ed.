#include <iostream>
using namespace::std;

//Exercise 3.43
void PrintArr() {
	int ia[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (const int(&p)[4] : ia)
		for (const int i : p)
			cout << i;
	cout << endl;

	for (size_t i = 0; i < 3; ++i)
		for (size_t j = 0; j < 4; ++j)
			cout << ia[i][j];
	cout << endl;

	for (int(*p1)[4] = begin(ia); p1 < end(ia); ++p1)
		for (int* p2 = begin(*p1); p2 < end(*p1); ++p2)
			cout << *p2;
	cout << endl;
}

//Exercise 3.44
void PrintArr2() {
	int ia[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };
	typedef int row[4];
	for (row& r : ia)
		for (const int i : r)
			cout << i;
	cout << endl;

	typedef size_t size;
	for (size i = 0; i < 3; ++i)
		for (size j = 0; j < 4; ++j)
			cout << ia[i][j];
	cout << endl;

	typedef int (*parr)[4];
	typedef int *pint;
	for (parr p1 = begin(ia); p1 < end(ia); ++p1)
		for (pint p2 = begin(*p1); p2 < end(*p1); ++p2)
			cout << *p2;
	cout << endl;
}

//Exercise 3.45
void PrintArr3() {
	int ia[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };
	for (const auto& r : ia)
		for (const auto& c : r)
			cout << c;
	cout << endl;

	//I doubt that i get assigned the correct type here...
	for (auto i = 0; i < 3; ++i)
		for (auto j = 0; j < 4; ++j)
			cout << ia[i][j];
	cout << endl;
	
	for (auto p1 = begin(ia); p1 < end(ia); ++p1)
		for (auto p2 = begin(*p1); p2 < end(*p1); ++p2)
			cout << *p2;
	cout << endl;
}

int main() {
	PrintArr();
	PrintArr2();
	PrintArr3();
}