#include "utils.hpp"
#include "Crypt.hpp"
#include "ListCrypts.hpp"

ListCrypts::ListCrypts() {}

void ListCrypts::addCrypt(Crypt crypt) {
	this->listCrypts.push_back(crypt);

}

vector<Crypt> ListCrypts::getListCrypts() {
	return this->listCrypts;
}

void ListCrypts::print() {
	cout << "---- List of Crypts ----" << endl;
	for (Crypt crypt : this->listCrypts)
		crypt.print();
}

Crypt ListCrypts::getCrypt(int i) {
	return this->listCrypts[i];
}

Crypt ListCrypts::getCryptByPerimeter(double perimeter) {
	for (Crypt crypt : listCrypts)
		if (crypt.getCell().getPerimeter() == perimeter) return crypt;
}

void ListCrypts::clear() {
	this->listCrypts.clear();
}

int ListCrypts::getNumberCrypts() {
	return this->listCrypts.size();
}
