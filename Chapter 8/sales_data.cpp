#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "sales_data.h"
using namespace::std;

Sales_data add(const Sales_data & sda, const Sales_data & sdb){
	Sales_data ret = sda;
	ret.combine(sdb);
	return ret;
}

ostream & print(ostream & os, const Sales_data & sd){
	os << sd.isbn() << " sold " << sd.units_sold << " at an average price of " << sd.avg_price();
	return os;
}

istream & read(istream & is, Sales_data & sd){
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
