#ifndef DA_PROJECT_APPFUNC_H
#define DA_PROJECT_APPFUNC_H
#include <iostream>
#include "vector"
#include "Package.h"
#include "Driver.h"
using namespace std;

void readDriverFiles(vector<Driver> &drivers);
void readPackageFiles(vector<Package> &packages);

#endif //DA_PROJECT_APPFUNC_H
