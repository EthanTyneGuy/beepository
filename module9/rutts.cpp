#include <iostream>

using namespace std;

int sums(int n);
int products(int n);

int main() {
    int num;

    // the fall of man will be at its own hand
    do {
        cout << "Enter a positive integer or 0 to quit: ";
        cin >> num;

        if (num > 0) {
            cout << "The sum is " << sums(num) << "." << endl;
            cout << "The product is " << products(num) << "." << endl;
        } else if (num < 0) {
            cout << "Please enter a positive integer." << endl;
        }
    } while (num != 0);

    return 0;
}
int sums(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}
int products(int n) {
    int product = 1;
    for (int i = 1; i <= n; ++i) {
        product *= i;
    }
    return product;
}
