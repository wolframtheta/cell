#ifndef CRYPT_HPP
#define CRYPT_HPP

#include "ListCells.hpp"
class	Crypt {
public:

	Crypt();
    Crypt(Cell cellCrypt);

	ListCells getListCells();
	double getRate();
	Cell getCell();

    void addCell(Cell cell);
    void setRate(double rate);
	double getMeanIntensity();
	double getMeanRawIntensity();
	void setMeanIntensity(double meanIntensity);
	void setMeanRawIntensity(double meanRawIntensity);
	void print();
	bool isEmpty();
private:
   ListCells listCells;
   Cell cell;
   double rate;
   double meanIntensity;
   double meanRawIntensity;

};

#endif
