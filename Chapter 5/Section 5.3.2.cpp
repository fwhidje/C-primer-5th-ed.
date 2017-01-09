#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool test_char(char ch);

//Exercise 5.9, 5.10 & 5.11
int character_counter() {
	int counter = 0;
	string inp;
	while (getline(cin, inp)) {
		for (const auto& ch : inp) {
			//uses a helper function to keep things clean.
			//This function returns TRUE if ch matches any of the characters (spaces, vowels, ...)
			if (test_char(tolower(ch)))
				++counter;
		}
	}
	return counter;
}

bool test_char(char ch){
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
		|| ch == '\t' || ch == '\n' || isspace(ch))
		return true;
	return false;
}

//Exercise 5.12
int substr_counter() {
	int counter = 0;
	string inp;
	while (getline(cin, inp)) {
		if (!inp.empty()) {
			for (int i = 0; i < (inp.length() - 1); ++i)
				if (inp[i] == 'f' && (inp[i + 1] == 'f' || inp[i + 1] == 'l' || inp[i + 1] == 'i'))
					++counter;
		}
	}
	return counter;
}

//Exercise 5.13
/*
(a) There are no breaks here. This will compile but will be wrong.

unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
	case 'a': aCnt++;
	case 'e': eCnt++;
	default: iouCnt++;
}


(b) the ix in the default case is already initialized in case 1.

unsigned index = some_value();
switch (index) {
	case 1:
		int ix = get_value();
		ivec[ix] = index;
		break;
	default:
		ix = ivec.size() - 1;
		ivec[ix] = index;
}

(c) a case-label can can have only a single value 

unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
	case 1, 3, 5, 7, 9:
		oddcnt++;
		break;
	case 2, 4, 6, 8, 10:
		evencnt++;
		break;
}

(d) The case labels must be integral constant expressions.

unsigned ival = 512, jval = 1024, kval = 4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch (swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
} */

int main() {
	
	return 0;
}


