#ifndef DA_PROJECT_MENU_H
#define DA_PROJECT_MENU_H
#include "vector"
#include "string"
#include "Package.h"
#include "Driver.h"
#include "AppFunc.h"
using namespace std;
class Menu {
private:
    vector<string> menuOptions = {"Deliver packages", "Exit"};
    vector<string> algOptions = {"Deliver more packages with the least amount of drivers", "Make the most profit", "Deliver express packages", "Exit"};
    int state = 0;
    void algoOptions();
    void mainMenu();
    void first(vector<Package> &packages, vector<Driver> &drivers);
    void third(vector<Package> &packages);
public:
    bool nextState(vector<Package> &packages, vector<Driver> &drivers);
};
#endif //DA_PROJECT_MENU_H
