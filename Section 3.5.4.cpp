#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace::std;

//Exercise 3.37
//The character array ca[] has no '\0' value, which means while(*cp) will always be true.
//cp will keep incrementing and printing, way beyond the end of ca[].
//A solution would be to add '\0' as the final character to ca[].
void foo() {
	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
}

//Exercise 3.39
//Checks for equality.
bool stringComp(const string& s1, const string& s2) {
	if (s1.length() != s2.length())
		return 0;

	for (string::size_type i = 0; i < s1.length(); ++i)
		if (s1[i] != s2[i])
			return 0;

	return 1;
}

//Exercise 3.39 b
bool cstringComp(const char* a1, const char* a2) {
	//This also guarantees that the last characters are equal (i.e. '\0')
	if (strlen(a1) != strlen(a2))
		return 0;

	//Compares all but the trailing '\0' characters
	while (*a1)
		if (*a1++ != *a2++)
			return 0;

	return 1;
}

//Exercise 3.40
//This has to be hard-coded
void strLitToChar() {
	char ca[] = "First";
	char cb[] = "Second";
	char cc[5 + 6 + 1];

	strcpy(cc, ca);
	strcat(cc, cb);

	cout << cc << endl;
}


int main() {
	string s1 = "test";
	string s2 = "test";
	cout << stringComp(s1, s2) << endl;

	char ca[] = { 't','e','\0' };
	char cb[] = { 't','e','\0' };
	cout << cstringComp(ca, cb) << endl;

	strLitToChar();
}
