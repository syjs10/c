#include "Person.h"
#include <ostream>
ostream &operator<<(ostream &out, Person &person) {
	out << person.name << "---------" << person.phone << endl;
	return out;
}
Person &Person::operator=(Person &person) {
	this -> name = person.name;
	this -> phone = person.phone;
	return *this;
}
bool Person::operator==(Person &person) {
	if (this -> name == person.name && this -> phone == person.phone) {
		return true;
	}
	return false;
}
