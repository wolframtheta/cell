#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<vector<string> > list;


bool isTitle(string value) {

    return (value == "Label" || value == "RawIntDen" || value == "Area" || value == "Mean" || value == "StdDev" || value == "Min"
     || value == "Max" || value == "Perim." || value == "IntDen" || value == "Median" || value == "%Area");
}

int main() {


    ifstream file;
    file.open("file.csv");
    string value;
    vector<string> data;
    int i = 0;
    if (file.is_open()) {
    while (getline(file, value, ',')) {
  cout << value << endl;
                /*if (!isTitle(value) && i == 0) {



            if (i == 12) {
                i = 0;
                list.push_back(data);
            }
            if (i == 0 || i == 6 || i == 7) data.push_back(value);



            ++i;
                }
*/
    }

    }

    /*for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < list.size() - 1; ++k) {
            cout << list[j][k] << endl;
        }
    }*/


}


