counting: counting.o Cell.o Crypt.o Animal.o ListCells.o ListCrypts.o ListAnimals.o
	g++ counting.o Cell.o Crypt.o Animal.o ListCells.o ListCrypts.o ListAnimals.o -o counting

counting.o: counting.cpp
	g++ -c counting.cpp -std=c++11

Cell.o: Cell.cpp
	g++ -c Cell.cpp -std=c++11

Crypt.o: Crypt.cpp
	g++ -c Crypt.cpp -std=c++11

Animal.o: Animal.cpp
	g++ -c Animal.cpp -std=c++11

ListCells.o: ListCells.cpp
	g++ -c ListCells.cpp -std=c++11

ListCrypts.o: ListCrypts.cpp
	g++ -c ListCrypts.cpp -std=c++11

ListAnimals.o: ListAnimals.cpp
	g++ -c ListAnimals.cpp -std=c++11

clean:
	rm *.o
	rm counting
