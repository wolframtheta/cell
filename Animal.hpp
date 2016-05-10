#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "ListCrypts.hpp"
class Animal {
public:

	Animal();
    void setID(string ID);
    void setMean(double mean);
	ListCrypts getListCrypts();
	void addCrypt(Crypt crypt);
    string getID();
    double getMean();
	void print();
	void setMeanIntensity(double intensity);
	void setMeanRawIntensity(double intensity);

	double getMeanIntensity();
	double getMeanRawIntensity();
private:
	string ID;
	ListCrypts listCrypts;
    double mean;
	double meanIntensity;
	double meanRawIntensity;

};

#endif
