#include "auxiliar.h"
#include "iostream"
#include "vector"

using namespace std;

void clearSCR() {
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
}

void title(const string& string) {
    cout << "-----------------------------------------" << endl;
    cout << "|            " << string << endl;
    cout << "-----------------------------------------" << endl;
}

void showMenu(const vector<string>& options, int settingsOp) {

    for (int i = 1; i <= options.size(); ++i) {
        cout << "|       " << i << "- " << options.at(i - 1) << (settingsOp == i ? " [X]" : "") << endl;
    }
    cout << "|----------------------------------------" << endl;
}

int getInt(const string& text, const string& text2) {
    int number;
    cout << "| " << text << "?" << " " << text2 << endl << "|";
    cin >> number;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Invalid input";
        return getInt(text,text2);
    }
    else if(cin.peek()!='\n') {
        cout << "Invalid input";
        cin.ignore(INT_MAX, '\n');
        return getInt(text, text2);
    }

    return number;
}

double getDouble(const string& text, const string& text2) {
    double number;
    cout << "|  " << text << "?" << " " << text2 << endl << "|";
    cin >> number;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Invalid input";
        return getDouble(text,text2);
    }
    else if(cin.peek()!='\n') {
        cout << "Invalid input";
        cin.ignore(INT_MAX, '\n');
        return getDouble(text, text2);
    }

    return number;
}

string getString(const string& text, const string& text2) {
    string x;
    cout << "| " << text << "?" << " " << text2 << endl << "|";
    if (cin.peek() == '\n') cin.ignore(INT_MAX, '\n');
    getline(cin, x);
    return x;
}