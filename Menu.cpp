#include "Menu.h"
#include "auxiliar.h"

void Menu::mainMenu() {
    title("Main Menu");
    showMenu(menuOptions);

    int key = getInt("What's your option");
    while (key < 1 || key > 2) key = getInt("Not a valid option. What's your option");
    state = key;
}

bool Menu::nextState() {
    clearSCR();
    switch (state) {
        case 0:
            mainMenu();
            return true;
        case 1:
            algoOptions();
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
    state = 3;
}
