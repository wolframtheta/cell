#ifndef LISTANIMALS_HPP
#define LISTANIMALS_HPP

#include "Animal.hpp"


class ListAnimals {
public:

	ListAnimals();
	void addAnimal(Animal animal);
	vector<Animal> getListAnimals();
	Animal getAnimalByID(string ID);
	Animal getAnimal(int i);
	void print();
	int size();
	vector<Animal> listAnimals;
private:

};


#endif

