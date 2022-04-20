#include <iostream>
#include "gtest/gtest.h"
#include "AppFunc.h"
#include "vector"
#include "Menu.h"
using namespace std;

int main() {
    vector<Package> packages;
    vector<Driver> drivers;
    readDriverFiles(drivers);
    readPackageFiles(packages);
    Menu menu;
    bool run = true;

    while (run) {
        run = menu.nextState();
    }
    return 0;
}
