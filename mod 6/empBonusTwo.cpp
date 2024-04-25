#include <iostream>
#include <string>
using namespace std;

double calcBonus(int score, double sal) {
    if (score == 1){
            return (0.25 * sal);
    }
    if (score = 2){
            return (0.15 * sal);
    }
    if (score = 3){
            return (0.10 * sal);
    }
    if (score = 4){
            return 0.0;
    }
    else{
        cout << "HOW DID YOU GET HERE????";
        return 1;
    }
}

int main() {
    string empName;
    double yearSalary;
    int empScore;

    cout << "Enter employee's name: ";
    getline(cin, empName);
    cout << "Enter annual salary: $";
    cin >> yearSalary;
    cout << "Enter performance rating (1-4): ";
    cin >> empScore;

    while (empScore < 1 || empScore > 4) {
        cout << "I said 1-4 idiot.\n Try Again" << endl;
        cin >> empScore;
    }

    cout << "Employee Name: " << empName << endl;
    cout << "Yearly Salary: $" << yearSalary << endl;
    cout << "Performance Rating: " << empScore << endl;
    if (empScore != 4){
    cout << "Bonus: $" << calcBonus(empScore, yearSalary) << endl;
    }
    else {
        cout << "Bonus: $" << "0" << endl;
    }
    return 0;
}