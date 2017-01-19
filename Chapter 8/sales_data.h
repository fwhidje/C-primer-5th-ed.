#ifndef GUARDED_sales_data_h
#define GUARDED_sales_data_h
#include <string>
#include <iostream>

class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
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
private:
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline Sales_data& Sales_data::combine(const Sales_data& sd) {
	units_sold += sd.units_sold;
	revenue += sd.revenue;
	return *this;
}

inline double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}



#endif // !GUARDED_Section_71_h
#pragma once
#pragma once
