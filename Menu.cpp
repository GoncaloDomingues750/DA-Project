#include "Menu.h"
#include "auxiliar.h"
#include "conio.h"

void Menu::mainMenu() {
    title("Main Menu");
    showMenu(menuOptions);

    int key = getInt("What's your option");
    while (key < 1 || key > 2) key = getInt("Not a valid option. What's your option");
    if (key == 2)state = 5;
    else state = 1;
}

bool Menu::nextState(vector<Package> &packages, vector<Driver> &drivers, vector<Package> &expPackages) {
    clearSCR();
    switch (state) {
        case 0:
            mainMenu();
            return true;
        case 1:
            algoOptions();
            return true;
        case 2:
            first(packages, drivers);
            state = 5;
            return true;
        case 3:
            second(packages, drivers);
            state = 5;
            return true;
        case 4:
            third(expPackages);
            state = 5;
            return true;
        default:
            return false;
    }}

void Menu::algoOptions() {
    title("Choose a proccess:");
    showMenu(algOptions);

    int key = getInt("What's your option");
    while (key<1 || key>4){
        key = getInt("Not a valid option. What's your option");
    }

    switch (key) {
        case 1:
            state = 2;
            break;
        case 2:
            state = 3;
            break;
        case 3:
            state = 4;
            break;
        default:
            state = 5;
    }
}

void Menu::first(vector<Package> &packages, vector<Driver> &drivers) {
    vector<int> final = firstScenario(packages, drivers);
    double fin = final[0];
    double pEfficiency = fin / packages.size();
    int efficiency = pEfficiency * 100;
    cout << "| " << final[0] << " out of " << packages.size() << " packages were delivered using " << final[1] << " drivers!" << endl;
    cout << "| The company was " << efficiency << "% efficient!" << endl;
    cout << "| Thanks for using our program!" << endl;
    cout << "| Click enter!" << endl;
    getch();
}

void Menu::third(vector<Package> &packages) {
    int final = thirdScenario(packages);
    double fin = final;
    double pEfficiency = fin / packages.size();
    int efficiency = pEfficiency * 100;
    cout << "| " << final << " out of " << packages.size() << " express packages were delivered" << endl;
    cout << "| The company was " << efficiency << "% efficient!" << endl;
    cout << "| Thanks for using our program!" << endl;
    cout << "| Click enter!" << endl;
    getch();
}

void Menu::second(vector<Package> &packages, vector<Driver> &drivers) {
    vector<int> final = secondScenario(packages, drivers);
    double fin = final[0];
    double pEfficiency = fin / packages.size();
    int efficiency = pEfficiency * 100;
    cout << "| " << final[0] << " out of " << packages.size() << " packages were delivered using " << final[1] << " drivers!" << endl;
    cout << "| The total profit of the day was " << final[2] << " euros!" << endl;
    cout << "| The company was " << efficiency << "% efficient!" << endl;
    cout << "| Thanks for using our program!" << endl;
    cout << "| Click enter!" << endl;
    getch();
}
