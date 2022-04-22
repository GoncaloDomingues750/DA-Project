#include <iostream>
#include "fstream"
#include "vector"
#include "AppFunc.h"
#include "algorithm"
#include "cmath"
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

void readExpressFiles(vector<Package> &expPackages){
    ifstream package;
    int volume, weight, reward, duration;

    package.open("../Expresso.txt");
    if (!package.is_open()){
        cerr << "Unable to open express packages file!";
        exit(1);
    }
    string line;
    getline(package, line);

    while (package >> volume >> weight >> reward >> duration){
        Package p1(weight, volume, reward, duration);
        expPackages.push_back(p1);
    }
    package.close();
}

bool cmpFunc(Package &package, Package &package1){
    return package.getDuration() < package1.getDuration();
}

bool cmpFunc2(Package &package, Package &package1){
    double ratio = sqrt((package.getWeight() * package.getWeight()) + (package.getVolume() * package.getVolume()));
    double ratio1 = sqrt((package1.getWeight() * package1.getWeight()) + (package1.getVolume() * package1.getVolume()));
    return ratio > ratio1;
}

bool cmpFunc3(Driver &driver, Driver &driver1){
    double ratio = sqrt((driver.getMaxVol() * driver.getMaxVol()) + (driver.getMaxWeight() * driver.getMaxWeight()));
    double ratio1 = sqrt((driver1.getMaxVol() * driver1.getMaxVol()) + (driver1.getMaxWeight() * driver1.getMaxWeight()));
    return ratio > ratio1;
}

bool cmpFunc4(Package &package, Package &package1){
    double ratio = package.getReward() / (package.getVolume() * package.getWeight());
    double ratio1 = package1.getReward() / (package1.getVolume() * package1.getWeight());
    return ratio > ratio1;
}

bool cmpFunc5(Driver &driver, Driver &driver1){
    double ratio = (driver.getMaxVol() * driver.getMaxWeight()) / driver.getCost();
    double ratio1 = (driver1.getMaxVol() * driver1.getMaxWeight()) / driver1.getCost();
    return ratio > ratio1;
}

vector<int> firstScenario(vector<Package> packages, vector<Driver> drivers){

    int final = 0, aux = 0, dAux;
    vector<int> ret;
    sort(packages.begin(), packages.end(), cmpFunc2);
    sort(drivers.begin(), drivers.end(), cmpFunc3);
    for (auto &x : drivers){
        int weightCap = x.getMaxWeight();
        int volCap = x.getMaxVol();
        for (auto &y : packages){
            int pos = 0;
            if ((weightCap - y.getWeight()) < 0 || (volCap - y.getVolume()) < 0){
                break;
            } else{
                weightCap -= y.getWeight();
                volCap -= y.getVolume();
                packages.erase(packages.begin() + pos);
                final ++;
                dAux = aux;
            }
        }
        aux++;
    }
    ret.push_back(final);
    ret.push_back(dAux);
    return ret;
}

vector<int> secondScenario(vector<Package> packages, vector<Driver> drivers){
    int final = 0, aux = 0, profit = 0;
    vector<int> ret;
    sort(packages.begin(), packages.end(), cmpFunc4);
    sort(drivers.begin(), drivers.end(), cmpFunc5);
    for (auto &x : drivers){
        vector<int> vanP = {};
        int weightCap = x.getMaxWeight();
        int volCap = x.getMaxVol();
        int pos = 0, nProfit = 0;
        for (auto &y : packages){
            if ((weightCap - y.getWeight()) < 0 || (volCap - y.getVolume()) < 0){
                break;
            } else{
                weightCap -= y.getWeight();
                volCap -= y.getVolume();
                vanP.push_back(pos);
                nProfit += y.getReward();
                pos ++;
            }
        }
        if ((nProfit - x.getCost()) >= 0){
            profit += nProfit;
            profit -= x.getCost();
            aux++;
            final += vanP.size();
            for (auto &z : vanP)packages.erase(packages.begin() + z);
        }
    }
    ret.push_back(final);
    ret.push_back(aux);
    ret.push_back(profit);
    return ret;
}

int thirdScenario(vector<Package> &packages){
    const int workTime = 28800;
    int sum = 0;
    int final = 0;


    sort(packages.begin(), packages.end(), cmpFunc);
    for (auto & package : packages){
        if (sum + package.getDuration() > workTime){
            return final;
        }
        sum += package.getDuration();
        final ++;
    }
    return final;
}
