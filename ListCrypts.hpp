#ifndef LISTCRYPTS_HPP
#define LISTCRYPTS_HPP

#include "Crypt.hpp"


class ListCrypts {
public:

	ListCrypts();
	void addCrypt(Crypt crypt);
	vector<Crypt> getListCrypts();
	Crypt getCryptByPerimeter(double perimeter);
	Crypt getCrypt(int i);
	int getNumberCrypts();
	void print();
	void clear();
private:
	vector<Crypt> listCrypts;

};


#endif

