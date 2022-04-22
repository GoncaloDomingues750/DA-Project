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
    void algoOptions(); //Displays secondary menu with algorithm options
    void mainMenu(); //Displays main menu
    void first(vector<Package> &packages, vector<Driver> &drivers); //Runs the first scenario
    void second(vector<Package> &packages, vector<Driver> &drivers); //Runs the second scenario
    void third(vector<Package> &packages); //Runs the third scenario
public:
    bool nextState(vector<Package> &packages, vector<Driver> &drivers, vector<Package> &expPackages); //Helps connecting the main function and the rest of the program
};
#endif //DA_PROJECT_MENU_H
