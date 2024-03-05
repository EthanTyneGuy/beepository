#include <iostream>

using namespace std;

double sum(double a, double b);
double difference(double a, double b);
double product(double a, double b);

int main() {
    double num1, num2;

    // Prompt the user for two numeric values
    cout << "Enter first numeric value: ";
    cin >> num1;

    cout << "Enter second numeric value: ";
    cin >> num2;

    cout << "Sum is: " << sum(num1, num2) << endl;

    cout << "Difference is: " << difference(num1, num2) << endl;

    cout << "Product is: " << product(num1, num2) << endl;

    return 0;
}
double sum(double a, double b) {
    return a + b;
}
double difference(double a, double b) {
    return a - b;
}
double product(double a, double b) {
    return a * b;
}