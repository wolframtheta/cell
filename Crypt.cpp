#include "utils.hpp"
#include "ListCells.hpp"
#include "Crypt.hpp"

Crypt::Crypt(){
	this->rate = -1;
}

Crypt::Crypt(Cell cellCrypt) {
    this->cell = cellCrypt;
    this->rate = 0.0;
	this->listCells = ListCells();
	this->meanIntensity = 0.0;
	this->meanRawIntensity = 0.0;
}

double Crypt::getMeanIntensity() {
	return this->meanIntensity;
}

double Crypt::getMeanRawIntensity() {
	return this->meanRawIntensity;
}

void Crypt::setMeanIntensity(double meanIntensity) {
	this->meanIntensity = meanIntensity;
}

void Crypt::setMeanRawIntensity(double meanRawIntensity) {
	this->meanRawIntensity = meanRawIntensity;
}


ListCells Crypt::getListCells() {
    return this->listCells;
}

double Crypt::getRate() {
	return this->rate;
}

Cell Crypt::getCell() {
    return this->cell;
}

void Crypt::addCell(Cell cell) {
	this->listCells.addCell(cell);
}

void Crypt::setRate(double rate) {
    this->rate = rate;
}

void Crypt::print() {
	cout << "Crypt: " << cell.getPerimeter() << " Rate: " << this->rate << " Intensity: " << cell.getIntensity() << endl;
	listCells.print();
}

bool Crypt::isEmpty() {
	return (this->rate == -1);
}
