#ifndef LISTCELLS_HPP
#define LISTCELLS_HPP

#include "Cell.hpp"


class ListCells {
public:

	ListCells();
	void addCell(Cell cell);
	vector<Cell> getListCells();

	int getNumberCells();
	void print();
private:
	vector<Cell> listCells;

};


#endif

