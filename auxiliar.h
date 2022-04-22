#ifndef CODE_AUXILIAR_H
#define CODE_AUXILIAR_H
#include "string"
#include "vector"

using namespace std;


void clearSCR(); //Clears the screen

void title(const string& string = ""); //Displays title

void showMenu(const vector<string>& options, int settingsOp = 0); //Displays menu options

int getInt(const string& text = "", const string& text2 = ""); //Gets the user's option as an integer

double getDouble(const string& text = "", const string& text2 = ""); //Gets the user's option as a double

string getString(const string& text = "", const string& text2 = ""); //Gets the user's option as a string

#endif //CODE_AUXILIAR_H
