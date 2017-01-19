#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "sales_data.h"
using namespace::std;

//Exercise 8.1
istream& to_eof(istream& in) {
	string x;
	while (in >> x) 
		cout << x << endl;
	in.clear();
	return in;
}

//Exercise 8.4
void open_and_read_lines(char const* name) {
	ifstream inp(name);
	vector<string> outp;
	if (inp) {
		string line;
		while (std::getline(inp, line))
			outp.push_back(line);
	}
	else 
		cerr << "file " << name << " doesn't exist!" << endl;
}

//Exercise 8.5
void open_and_read_words(char const* name) {
	ifstream inp(name);
	vector<string> outp;
	if (inp) {
		string line;
		while (std::getline(inp, line, ' '))
			outp.push_back(line);
	}
	else
		cerr << "file " << name << " doesn't exist!" << endl;
}

//Exercise 8.6
void bookstore(char const* name) {
	ifstream ins(name);
	Sales_data total;
	if (read(ins,total)) { 
		Sales_data trans;
		while (read(ins, trans)) {
			if (total.isbn() == trans.isbn()) 
				total.combine(trans); 
			else {
				print(cout, total) << endl;
				total = trans; 
			}
		}
		print(cout, total) << endl;
	}
	else
		cerr << "No data?!" << endl;
}

//Exercise 8.7 & 8.8
void bookstore2(char const* name, char const* name2) {
	ifstream ins(name);
	//The second parameter is used for 8.8
	ofstream outs(name2,ofstream::app);
	Sales_data total;
	if (read(ins, total)) {
		Sales_data trans;
		while (read(ins, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(outs, total) << endl;
				total = trans;
			}
		}
		print(outs, total) << endl;
	}
	else
		cerr << "No data?!" << endl;
}

//Exercise 8.10
void read_file_by_word(const char* name) {
	ifstream fs(name);
	string temp;
	vector<string> lines;

	while (std::getline(fs, temp))
		lines.push_back(temp);

	istringstream ss;
	for (const auto& x : lines) {
		ss.str(x);
		while (ss >> temp)
			cout << temp << '\n';
		ss.clear();
	}
}

//Exercise 8.11
//The most important change you need to make is that you need to add a record.clear()

int main() {
	//Exercise 8.9
	string temp = "this is a test";
	istringstream ss(temp);
	to_eof(ss);

	read_file_by_word("test.txt");

	return 0;
}
