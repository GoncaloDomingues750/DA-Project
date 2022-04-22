#ifndef DA_PROJECT_APPFUNC_H
#define DA_PROJECT_APPFUNC_H
#include <iostream>
#include "vector"
#include "Package.h"
#include "Driver.h"
using namespace std;

void readDriverFiles(vector<Driver> &drivers); //Reads the drivers file and stores each driver in a vector
void readPackageFiles(vector<Package> &packages); //Reads the packages file and stores each package in a vector
void readExpressFiles(vector<Package> &packages); //Reads the express packages file and stores each package in a vector

vector<int> firstScenario(vector<Package> packages, vector<Driver> drivers); //Function that implements the first scenario of the project
vector<int> secondScenario(vector<Package> packages, vector<Driver> drivers); //Function that implements the second scenario of the project
int thirdScenario(vector<Package> &packages); //Function that implements the third scenario of the project

bool cmpFunc(Package &package, Package &package1); //Auxiliary function that compares the duration of the duration of two packages for usage in the sort function
bool cmpFunc2(Package &package, Package &package1); //Auxiliary function that compares the weight and volume of two packages for usage in the sort function
bool cmpFunc3(Driver &driver, Driver &driver1); //Auxiliary function that compares the maximum weight and maximum volume of two drivers for usage in the sort function
bool cmpFunc4(Package &package, Package &package1); //Auxiliary function that compares the weight, volume and reward of two packages for usage in the sort function
bool cmpFunc5(Driver &driver, Driver &driver1); //Auxiliary function that compares the maximum weight, maximum volume and cost of two drivers for usage in the sort function

#endif //DA_PROJECT_APPFUNC_H
