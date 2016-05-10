#include "utils.hpp"
#include "ListCrypts.hpp"
#include "Animal.hpp"

Animal::Animal() {

}

void Animal::setID(string ID) {
    this->ID = ID;
}

void Animal::setMean(double mean) {
    this->mean = mean;
}

string Animal::getID() {
    return this->ID;
}

void Animal::setMeanIntensity(double intensity) {
	this->meanIntensity = intensity;
}

void Animal::setMeanRawIntensity(double intensity) {
	this->meanRawIntensity = intensity;
}

double Animal::getMeanIntensity() {
	return this->meanIntensity;
}

double Animal::getMeanRawIntensity() {
	return this->meanRawIntensity;
}

double Animal::getMean() {
    return this->mean;
}

void Animal::print() {
	cout << "Animal: " << this->ID << " -> Mean: " << this->mean << endl;
	this->listCrypts.print();
}

ListCrypts Animal::getListCrypts() {
	return this->listCrypts;
}

void Animal::addCrypt(Crypt crypt) {
	listCrypts.addCrypt(crypt);
}
