#include <iostream>
using namespace::std;


//exercise 3.35
void SetToZero(int* b, int* e) {
	while (b != e) 
		*b++ = 0;
}

//exercise 3.36
bool CheckEquality(const int* b1, const int* e1, const int* b2, const int* e2) {
	if ((e1 - b1) != (e2 - b2))
		return 0;
	for (const int* t1 = b1, *t2 = b2; t1 != e1; ++t1, ++t2) {
		if (*t1 != *t2)
			return 0;
	}
	return 1;
}

int main() {
	return 0;
}