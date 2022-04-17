#include <iostream>
#include "fstream"
#include "vector"
#include "AppFunc.h"
using namespace std;


void readDriverFiles(vector<Driver> &drivers){
    ifstream driver;
    int maxVol, maxWeight, cost;

    driver.open("../Carrinhas.txt");
    if (!driver.is_open()){
        cerr << "Unable to open drivers file!";
        exit(1);
    }
    string line;
    getline(driver, line);

    while (driver >> maxVol >> maxWeight >> cost){
        Driver d1(maxVol, maxWeight, cost);
        drivers.push_back(d1);
    }
    driver.close();
}

void readPackageFiles(vector<Package> &packages){
    ifstream package;
    int volume, weight, reward, duration;

    package.open("../Encomendas.txt");
    if (!package.is_open()){
        cerr << "Unable to open packages file!";
        exit(1);
    }
    string line;
    getline(package, line);

    while (package >> volume >> weight >> reward >> duration){
        Package p1(weight, volume, reward, duration);
        packages.push_back(p1);
    }
    package.close();
}
