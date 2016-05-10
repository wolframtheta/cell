#include "utils.hpp"
#include "Animal.hpp"
#include "ListAnimals.hpp"

ListAnimals::ListAnimals() {

}

void ListAnimals::addAnimal(Animal animal) {
	this->listAnimals.push_back(animal);
}

vector<Animal> ListAnimals::getListAnimals() {
	return this->listAnimals;
}

void ListAnimals::print() {
	for (Animal animal : this->listAnimals)
		animal.print();
}

Animal ListAnimals::getAnimalByID(string ID) {
	for (Animal animal : this->listAnimals)
		if (animal.getID() == ID) return animal;
}

Animal ListAnimals::getAnimal(int i) {
	return this->listAnimals[i];
}

int ListAnimals::size() {
	return this->listAnimals.size();
}
