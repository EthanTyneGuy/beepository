#include <iostream>
#include <string>
using namespace std;

int bonusCalc(double empScore) {
    if (empScore <= 30) {
        return 50;
    } else if (empScore <= 69) {
        return 75;
    } else if (empScore <= 199) {
        return 100;
    } else {
        return 200;
    }
}

int main() {
    string empName;
    double dollarVal;
    int transNum;
    int shiftNum;

    cout << "Enter employee's name: ";
    getline(cin, empName);
    cout << "Enter total transactions dollar value: ";
    cin >> dollarVal;
    cout << "Enter number of transactions: ";
    cin >> transNum;
    cout << "Enter number of shifts worked: ";
    cin >> shiftNum;

    double transVal = dollarVal/ transNum;
    double empScore = transVal / shiftNum;

    int bonus = bonusCalc(empScore);

    cout << empName << "'s productivity bonus is: $" << bonus << endl;

    return 0;
}