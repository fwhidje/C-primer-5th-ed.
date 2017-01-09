#include "Person.h"

std::istream & read(Person & p, std::istream & in){
	std::string n, a;
	//only changes info if BOTH inputs worked.
	if (in >> n >> a) {
		p.rename(n);
		p.new_address(a);
	}
	return in;
}

std::ostream & print(const Person & p, std::ostream & os){
	os << p.name() << ", living at " << p.address;
	return os;
}
