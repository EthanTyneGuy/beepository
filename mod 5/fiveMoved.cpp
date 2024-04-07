#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    size_t spacePos = fullName.find(' ');

    string firstName = fullName.substr(0, spacePos);
    string lastName = fullName.substr(spacePos + 1);

    cout << "Your initials are: " << firstName[0] << lastName[0] << endl;

    string newFirstName = firstName.substr(0, firstName.length() / 2) + lastName.substr(lastName.length() / 2);
    string newLastName = lastName.substr(0, lastName.length() / 2) + firstName.substr(firstName.length() / 2);

    cout << "Here's that new First name: " << newFirstName << endl;
    cout << "And here's your new last name " << newLastName << endl;

    return 0;
}