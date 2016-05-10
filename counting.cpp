#include "utils.hpp"
#include "ListAnimals.hpp"
#include "ListCrypts.hpp"
#include "ListCells.hpp"
#include "Animal.hpp"
#include "Cell.hpp"
#include "Crypt.hpp"

bool isHere(vector<int> random, int randNumber) {
	if (random.size() > 0) {
		for (int n : random)
			if (n == randNumber) return true;
	}
	return false;
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Usage: ./counting 'file'" << endl;
        exit(0);
    }


    ifstream file;
    string value;
    file.open(argv[1]);
    listP raw;
    vector<string> data;
    string::size_type sz;
	if (file.is_open()) {
        while (getline(file, value)) {
            int i = 0;
                    if (!isTitle(value)) {
                        data.erase(data.begin(),data.end());
                        ostringstream os;
                        for (char c : value) {
                            if (c != ',')
                               os << c;
                            else {
                                data.push_back(os.str());
                                os.str("");
                                os.seekp(0);
                            }
                            ++i;
                        }
                        raw.push_back(data);
                    }
        }

		file.close();

		ListAnimals listAnimalsOld;
		Animal animal;

		if (raw.size() > 0 && raw[0].size() > 0)
			animal.setID(raw[0][0]);
		cout << listAnimalsOld.listAnimals.size() << endl;
		//listAnimalsOld.addAnimal(animal);
		cout << "add1" << endl;
		listAnimalsOld.listAnimals.push_back(animal);
		cout << listAnimalsOld.listAnimals.size() << endl;
		cout << "add2" << endl;
		listAnimalsOld.addAnimal(animal);
		cout << "add3" << endl;
		for (int i = 0; i < raw.size(); ++i) {
			if (raw[i][0] != animal.getID()) {
				animal = Animal();
				animal.setID(raw[i][0]);
				cout << "lls" << endl;
				listAnimalsOld.addAnimal(animal);

			}
		}
		ListAnimals listAnimals = ListAnimals();

		for (int j = 0; j < listAnimalsOld.size(); ++j) {
			animal = Animal();
			animal.setID(listAnimalsOld.getAnimal(j).getID());
			Crypt crypt;
			for (int i = 0; i < raw.size(); ++i) {

				if (raw[i][0] == animal.getID()) {

					Cell cell = Cell((stod(raw[i][6], &sz)), stod(raw[i][7], &sz), stod(raw[i][10], &sz));
					if (stod(raw[i][6], &sz) > 100.0) {
						if (!crypt.isEmpty()) {
							double rate = crypt.getListCells().getNumberCells() / crypt.getCell().getPerimeter();
							crypt.setRate(rate);
							double meanInt = 0.0;
							double meanRawInt = 0.0;
							cout << "asdafs" << endl;
							for (Cell cell : crypt.getListCells().getListCells()) {
								meanInt += cell.getIntensity();
								meanRawInt += cell.getRawIntensity();
							}
							crypt.setMeanIntensity(meanInt/crypt.getListCells().getNumberCells());
							crypt.setMeanRawIntensity(meanRawInt/crypt.getListCells().getNumberCells());
							animal.addCrypt(crypt);
						}
						crypt = Crypt(cell);
					}
					else {
						crypt.addCell(cell);
					}
				}
			}
			double rate = crypt.getListCells().getNumberCells() / crypt.getCell().getPerimeter();
			crypt.setRate(rate);
			double meanInt = 0.0;
			double meanRawInt = 0.0;
			for (Cell cell : crypt.getListCells().getListCells()) {
				meanInt += cell.getIntensity();
				meanRawInt += cell.getRawIntensity();
			}
			crypt.setMeanIntensity(meanInt/crypt.getListCells().getNumberCells());
			crypt.setMeanRawIntensity(meanRawInt/crypt.getListCells().getNumberCells());


			animal.addCrypt(crypt);
			double meanRate;
			for (Crypt crypt : animal.getListCrypts().getListCrypts()) {
				meanInt += crypt.getMeanIntensity();
				meanRawInt += crypt.getMeanRawIntensity();
				meanRate += crypt.getRate();
			}
			meanRate /= animal.getListCrypts().getNumberCrypts();
			animal.setMean(meanRate/animal.getListCrypts().getNumberCrypts());
			animal.setMeanIntensity(meanInt/animal.getListCrypts().getNumberCrypts());
			animal.setMeanRawIntensity(meanRawInt/animal.getListCrypts().getNumberCrypts());
			listAnimals.addAnimal(animal);



		}

        ofstream file_cleanUp;
		file_cleanUp.open("CleanUp.csv");

		for (Animal animal : listAnimals.getListAnimals())
			for (Crypt crypt : animal.getListCrypts().getListCrypts()) {
				file_cleanUp << animal.getID() << ',' << crypt.getCell().getPerimeter() << '\n';
				for (Cell cell : crypt.getListCells().getListCells())
					file_cleanUp << animal.getID() << ',' << cell.getPerimeter() << '\n';

			}
		file_cleanUp.close();

        ofstream file_animal;
		file_animal.open("Animal.csv");
		for (Animal animal : listAnimals.getListAnimals())
			file_animal << animal.getID() << ',' << animal.getMean() << '\n';

        file_animal.close();

		ofstream file_crypt;
		file_crypt.open("CryptRatio.csv");
		for (Animal animal : listAnimals.getListAnimals()) {
			for (Crypt crypt : animal.getListCrypts().getListCrypts()) {
				file_crypt << crypt.getCell().getPerimeter() << ',' << crypt.getRate() << '\n';
			}
		}
		file_crypt.close();


listAnimals.getAnimal(0).print();

    }




}



