#include <iostream>
#include <string>

using namespace std;
//lests do this
int main() {
    int MAX_STUDENTS = 20;
    string names[MAX_STUDENTS];
    int ages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];

    int numStudents;

    // ask user baaaaaaaaaaaaaaaaaaaaaaby
    cout << "Enter the number of students (must be less than or equal to 20): ";
    cin >> numStudents;

    // Validate the number of students
    if (numStudents < 1 || numStudents > MAX_STUDENTS) {
        cerr << "Invalid number of students. Exiting program." << endl;
        return 1;
    }

    // Input data for each student
    for (int biss = 0; biss < numStudents; ++biss) {
        cout << "Enter the name of student " << biss + 1 << ": ";
        cin >> names[biss];

        cout << "Enter the age of student " << biss + 1 << ": ";
        cin >> ages[biss];

        // Validate age input
        while (ages[biss] <= 0) {
            cout << "Age must be a positive integer. Enter the age of student " << biss + 1 << ": ";
            cin >> ages[biss];
        }

        cout << "Enter the grade of student " << biss + 1 << " (A, B, C, D, F): ";
        cin >> grades[biss];

        // Validate grade input
        while (grades[biss] != 'A' && grades[biss] != 'B' && grades[biss] != 'C' && grades[biss] != 'D' && grades[biss] != 'F') {
            cout << "Grade must be one of: A, B, C, D, F. Enter the grade of student " << biss + 1 << ": ";
            cin >> grades[biss];
        }
    }

    //somebody once told to enroll in echs i thought it was a good idea. i feel gullible now. am i gonna get my lungs stolen
    cout << "\nStudent Information:\n";
    for (int biss = 0; biss < numStudents; ++biss) {
        cout << "Student " << biss + 1 << ":" << endl;
        cout << "Name: " << names[biss] << endl;
        cout << "Age: " << ages[biss] << endl;
        cout << "Grade: " << grades[biss] << endl;
    }
    return 0;
}