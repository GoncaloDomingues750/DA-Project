#ifndef DA_PROJECT_MENU_H
#define DA_PROJECT_MENU_H
#include "vector"
#include "string"
using namespace std;
class Menu {
private:
    vector<string> menuOptions = {"Deliver packages", "Exit"};
    vector<string> algOptions = {"Deliver more packages with the least amount of drivers", "Make the most profit", "Deliver express packages", "Exit"};
    int state = 0;
    void algoOptions();
    void mainMenu();
public:
    bool nextState();
};
#endif //DA_PROJECT_MENU_H
