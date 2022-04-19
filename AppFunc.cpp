#include <iostream>
#include "fstream"
#include "vector"
#include "AppFunc.h"
#include "algorithm"
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

bool cmpFunc(Package &package, Package &package1){
    return package.getDuration() < package1.getDuration();
}

int thirdScenario(vector<Package> &packages){
    const int workTime = 28800;
    int sum = 0;
    int final = 0;

    sort(packages.begin(), packages.end(), cmpFunc);
    cout << packages[0].getDuration() << " " << packages[1].getDuration() << endl;
    for (auto & package : packages){
        if (sum + package.getDuration() > workTime){
            return final;
        }
        sum += package.getDuration();
        final ++;
    }
    return final;
}
