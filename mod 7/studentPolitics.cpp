#include <iostream>
using namespace std;

int main() {
    char choice;
    int lCount = 0;
    int rCount = 0;

    cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
    cin >> choice;

    while (choice != 'X') {
        if (choice == 'L') {
            lCount++;
        } else if (choice == 'R') {
            rCount++;
        } else {
            cout << "Invalid input. Please enter L, R, or X." << endl;
        }

        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> choice;
    }

    cout << "Number of left-handed students: " << lCount << endl;
    cout << "Number of right-handed students: " << rCount << endl;

    return 0;
}