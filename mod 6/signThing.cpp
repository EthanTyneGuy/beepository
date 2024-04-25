#include <iostream>
#include <string>

using namespace std;

double priceCalc(int numChars, const string& material, const string& color) {
    double price = 35.0;
    if (numChars > 5) {
        price += (numChars - 5) * 4.0;
    }
    if (material == "Oak") {
        price += 20.0;
    }
    if (color == "Gold-leaf") {
        price += 15.0;
    }
    return price;
}

int main() {
    int numChars;
    string material, color;

    cout << "Enter the number of characters in the sign: ";
    cin >> numChars;
    cin.ignore(); // Ignore newline after integer input

    cout << "Enter the material (Oak or Pine): ";
    getline(cin, material);

    cout << "Enter the color of the characters (Black, White, or Gold-leaf): ";
    getline(cin, color);

    double price = priceCalc(numChars, material, color);
    cout << "The price of the sign is: $" << price << endl;

    return 0;
}