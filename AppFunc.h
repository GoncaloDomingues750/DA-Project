#ifndef DA_PROJECT_APPFUNC_H
#define DA_PROJECT_APPFUNC_H
#include <iostream>
#include "vector"
#include "Package.h"
#include "Driver.h"
using namespace std;

void readDriverFiles(vector<Driver> &drivers); //Reads the drivers file and stores each driver in a vector
void readPackageFiles(vector<Package> &packages); //Reads the packages file and stores each package in a vector

int thirdScenario(vector<Package> &packages); //Function that implements the third scenario of the project

bool cmpFunc(Package &package, Package &package1); //Auxiliary function that compares the duration of the duration of two packages for usage in the sort function

#endif //DA_PROJECT_APPFUNC_H
