#include <iostream>
#include <stdexcept>
using namespace::std;

//Exercise 5.23, 5.24
void divide() {
	int i1, i2;
	cout << "Please enter two integers: ";
	cin >> i1 >> i2;
	if (i2 == 0)
		throw runtime_error("Division by 0 is not allowed!");
	cout << i1 << " divided by " << i2 << " = " << i1 / i2 << endl;
}

//Exercise 5.25
void divide2() {
	int i1, i2;
	cout << "Please enter two integers: ";
	while (cin >> i1 >> i2) {
		try {
			if (i2 == 0)
				throw runtime_error("Division by zero");
			cout << i1 << " divided by " << i2 << " = " << i1/i2 << endl;
		}
		catch (runtime_error) {
			cout << "Division by zero is not allowed. \n"
				<< "Try again? y/n" << endl;
			char c;
			cin >> c;
			if (c == 'n' || !cin)
				break;
		}
	}

}

int main() {
	divide2();
	return 0;
}