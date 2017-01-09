#include <iostream>
#include "Section 7.1.h"
using namespace std;

//Exercise 7.1
void exercise1() {
	Sales_data tot;
	Sales_data temp;
	//checks whether the first input is valid or not.
	if (!(cin>>tot))
		cout << "invalid data" << endl;
	//if it's valid:
	else {
		while (cin >> temp) {
			if (tot.bookNo != temp.bookNo) {
				cout << tot;
				tot = temp;
			}
			else {
				tot.revenue += temp.revenue;
				tot.units_sold += temp.units_sold;
			}
		}
		//Writes the output for the last book, still in tot.
		cout << tot;
	}

}

//Exercise 7.2 & 7.3
void exercise2() {
	Sales_data tot;
	Sales_data temp;
	//checks whether the first input is valid or not.
	if (!(cin >> tot))
		cout << "invalid data" << endl;
	//if it's valid:
	else {
		while (cin >> temp) {
			if (tot.isbn() != temp.isbn()) {
				cout << tot;
				tot = temp;
			}
			else {
				tot.combine(temp);
			}
		}
		//Writes the output for the last book, still in tot.
		cout << tot;
	}
}

//Exercise 7.6
Sales_data add(const Sales_data& sda, const Sales_data& sdb){
	Sales_data ret = sda;
	ret.combine(sdb);
	return ret;
}
std::ostream &print(std::ostream& os, const Sales_data& sd){
	os << sd.isbn() << " sold " << sd.units_sold << " at an average price of " << sd.avg_price();
	return os;
}
std::istream &read(std::istream& is, Sales_data& sd){
	double price;
	is >> sd.bookNo >> sd.units_sold >> price;

	//The 'if' only triggers if the input was of the expected type. We then calculate the revenue.
	//Else it returns an empty Sales_data object.
	if (is)
		sd.revenue = sd.units_sold*price;
	else
		sd = Sales_data();

	return is;
}

//Exercise 7.7
void exercise7() {
	//tot holds the currently checked book, temp holds the last book read by the input.
	Sales_data tot;
	Sales_data temp;
	//checks whether the first input is valid or not.
	if (!read(cin, tot))
		cout << "invalid data" << endl;
	//if it's valid:
	else {
		while (read(cin, temp)) {
			if (tot.isbn() != temp.isbn()) {
				print(cout, tot);
				tot = temp;
			}
			else
				tot.combine(temp);
		}
		//Writes the output for the last checked book, still in tot.
		print(cout, tot);
	}
}

//Exercise 7.13
void exercise13() {
	Sales_data tot(cin);
	//checks whether the first input is valid or not.
	if (!cin)
		cout << "invalid data" << endl;
	//if it's valid:
	else {
		while (cin) {
			Sales_data temp(cin);
			if (tot.isbn() != temp.isbn()) {
				print(cout, tot);
				tot = temp;
			}
			else
				tot.combine(temp);
		}
		//Writes the output for the last checked book, still in tot.
		print(cout, tot);
	}
}

int main() {
	exercise2();
	return 0;
}