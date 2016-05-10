#include "utils.hpp"
#include "Cell.hpp"

Cell::Cell(){}
Cell::Cell(double perimeter, double intensity, double rawIntensity) {
    this->perimeter = perimeter;
	this->intensity = intensity;
	this->rawIntensity = rawIntensity;
}

Cell& Cell::operator=(const Cell& original) {
	perimeter = original.perimeter;
	intensity = original.intensity;
	rawIntensity = original.rawIntensity;
	return *this;
}


double Cell::getIntensity() {
    return this->intensity;
}

double Cell::getRawIntensity() {
	return this->rawIntensity;
}

double Cell::getPerimeter() {
    return this->perimeter;
}

void Cell::print() {
	cout << "Perimeter: " << this->perimeter << " Intensity: " << this->intensity << " Raw Intensity: " << this->rawIntensity << endl;
}
