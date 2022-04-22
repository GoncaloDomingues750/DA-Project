#include <iostream>
#include "gtest/gtest.h"
#include "AppFunc.h"
#include "vector"
#include "Menu.h"
using namespace std;

int main() {
    vector<Package> packages;
    vector<Package> expPackages;
    vector<Driver> drivers;
    readDriverFiles(drivers);
    readPackageFiles(packages);
    readExpressFiles(expPackages);
    Menu menu;
    bool run = true;
    while (run) {
        run = menu.nextState(packages, drivers, expPackages);
    }
    return 0;
}
