#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <string>

using namespace std;

typedef vector<vector<string> > listP;


static bool isTitle(string value) {

    return (value == "Label,Area,Mean,StdDev,Min,Max,Perim.,IntDen,Median,%Area,RawIntDen, ");
}
static void print(listP list) {
    for (vector<string> v : list) {
        for (string s :  v) {
            cout << s << " ";
        }
        cout << endl;
    }
}


#endif

