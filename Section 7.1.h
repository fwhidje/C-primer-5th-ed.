#ifndef GUARDED_Section_71_h
#define GUARDED_Section_71_h
#include <string>
#include <iostream>

class Sales_data {
public:
	Sales_data() : bookNo(""), units_sold(0), revenue(0) {}
	Sales_data(const std::string& s) : bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream& in) {
		read(in, *this);
	}

	std::string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
Sales_data& Sales_data::combine(const Sales_data& sd) {
	units_sold += sd.units_sold;
	revenue += sd.revenue;
	return *this;
}

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


//Reads input of the format - isbn - units sold - price of a single unit -
std::istream& operator >> (std::istream& in, Sales_data& sd) {
	double price;
	in >> sd.bookNo >> sd.units_sold >> price;

	//The 'if' only triggers if the input was of the expected type. We then calculate the price
	if (in)
		sd.revenue = sd.units_sold*price;
	else
		sd = Sales_data();

	return in;
}

//Writes a Sales_data item to an ostream
std::ostream& operator<< (std::ostream& out, const Sales_data& sd) {
	out << sd.bookNo << " sold " << sd.units_sold << " copies and made " << sd.revenue << "." << std::endl;
	return out;
}

#endif // !GUARDED_Section_71_h
#pragma once
