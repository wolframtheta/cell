#include "utils.hpp"
#include "Cell.hpp"
#include "ListCells.hpp"

ListCells::ListCells() {}

void ListCells::addCell(Cell cell) {
	this->listCells.push_back(cell);
}

vector<Cell> ListCells::getListCells() {
	return this->listCells;
}

int ListCells::getNumberCells() {
	return this->listCells.size();
}

void ListCells::print() {
	cout << "---- List of Cells ----" << endl;
	for (Cell cell : this->listCells)
		cell.print();
}

