#include <string>
#include <iostream>
#include <vector>
using namespace::std;

//Exercise 5.5
void letter_grade(const int grade) {
	string outp;
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	if (grade < 60)
		outp = scores[0];
	else {
		outp = scores[grade / 10 - 5];
		if (grade != 100 && grade % 10 < 3)
			outp += '-';
		else if (grade % 10 > 7)
			outp += '+';
	}
	cout << outp << endl;
}

//Exercise 5.6
void letter_grade2(const int grade) {
	string outp;
	outp = (grade < 60) ? "F" : (grade < 63) ? "D-" : (grade < 67) ? "D" :
		(grade < 70) ?  "D+" : (grade < 73) ? "C-" : (grade < 77) ? "C" :
		(grade < 80) ?  "C+" : (grade < 83) ? "B-" : (grade < 87) ? "B" :
		(grade < 90) ?  "B+" : (grade < 93) ? "A-" : (grade < 97) ? "A" : 
		(grade < 100)?	"A+" : "A++";
	cout << outp << endl;
}

//Exercise 5.7
//'corrected' code
/*void Foo() {
	Forgot a ';'
(a) if (ival1 != ival2)
		ival1 = ival2;			
	else ival1 = ival2 = 0;
	
	Either add braces, or change the indentation of 'occurs= 1;'
(b) if (ival < minval){
		minval = ival;
		occurs = 1;
	}
	
	Ival exists only inside the scope of the first 'if'
(c) int ival = 0;
	if (ival = get_value())
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0\n";

	'ival = 0' is an assignment and will always pass
(d) if (ival == 0)
		ival = get_value();
}*/

int main() {
	letter_grade(60);
	letter_grade(99);
	letter_grade(100);
	letter_grade2(60);
	letter_grade2(99);
	letter_grade2(100);
	return 0;
}