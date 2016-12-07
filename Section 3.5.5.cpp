#include <iostream>
#include <vector>
using namespace::std;

//Exercise 3.41
void VectFromAr() {
	int ia[] = { 2,5,4,3,9 };
	vector<int> vec(begin(ia), end(ia));
}

//Exercise 3.42
void ArFromVect() {
	vector<int> vec = { 2,5,4,3,9 };
	int ia[5];
	for (size_t i = 0; i < vec.size(); ++i)
		ia[i] = vec[i];
}

int main() {

	return 0;
}