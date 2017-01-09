#ifndef GUARDED_Person_h
#define GUARDED_person_h
#include <string>
#include <iostream>

class Person {
public:
	Person(){}
	Person(std::string name): n(name) {}
	Person(std::string name, std::string address): n(name), a(address){}
	Person(std::istream& in) {
		in >> n >> a;
	}

	std::string name() const {
		return n; }
	std::string address() const {
		return a; }
	void rename(std::string& new_name) {
		n = new_name;
	}
	void new_address(std::string& new_address) {
		a = new_address;
	}

private:
	std::string n;
	std::string a;
};

std::istream& read(Person& p, std::istream& in = std::cin );
std::ostream& print(const Person& p, std::ostream& os = std::cout);

#endif // !GUARDED_Person_h
#pragma once
