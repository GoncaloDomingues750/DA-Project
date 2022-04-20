#ifndef CODE_AUXILIAR_H
#define CODE_AUXILIAR_H
#include "string"
#include "vector"

using namespace std;



void clearSCR();

void title(const string& string = "");

void showMenu(const vector<string>& options, int settingsOp = 0);

void endMessage(const string& string = "");

bool errorFunc(const string& error);

int getInt(const string& text = "", const string& text2 = "");

double getDouble(const string& text = "", const string& text2 = "");

string getString(const string& text = "", const string& text2 = "");

#endif //CODE_AUXILIAR_H
