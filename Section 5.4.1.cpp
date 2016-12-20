#include <iostream>
#include <string>
using namespace::std;

//Exercise 5.14
void check_multiple() {	
	//imax: holds the maximum number of duplicates; cnt: a counter 
	int imax = 1,cnt = 0;
	//hold: holds the previous string; smax: holds the most duplicated string; str: holds the current string
	string hold, smax, str;
	while (cin >> str){
		//increments the counter if the currect and previous string are equal
		if (str == hold) {
			++cnt;
			//checks whether the currently counted word has the highest number of duplicates
			if (cnt > imax) {
				imax = cnt;
				smax = hold;
			}
		}
		//else: resets the counter and the hold-string
		else {
			hold = str;
			cnt = 1;
		}
	}

	if (imax > 1)
		cout << smax << " " << imax;
	else
		cout << "No word was repeated";
}

int main() {
	check_multiple();
	return 0;
}
