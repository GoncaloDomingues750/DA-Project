#include <iostream>
#include "gtest/gtest.h"
#include "AppFunc.h"
#include "vector"
using namespace std;

int main() {
    vector<Package> packages;
    vector<Driver> drivers;
    readDriverFiles(drivers);
    readPackageFiles(packages);
    cout << packages.size() << " " << drivers.size();
}
