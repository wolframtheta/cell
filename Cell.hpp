#ifndef CELL_HPP
#define CELL_HPP

class Cell {
public:

	Cell();
	Cell(double perimeter, double intensity, double rawIntensity);
	Cell& operator=(const Cell& original);
    double getPerimeter();
	double getIntensity();
	double getRawIntensity();
	void print();
private:
  double perimeter;
  double intensity;
  double rawIntensity;

};

#endif
