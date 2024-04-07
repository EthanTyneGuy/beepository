#include <iostream>

using namespace std; 

// recursive function 
int fibonacci(int biss) {
    if (biss <= 1) {
        return n;
    }
    return fibonacci(biss - 1) + fibonacci(biss - 2);
}

int main() {
    int biss;

    // ask for how many
    cout << "Enter number of terms for  the Fibonacci sequence: ";
    cin >> biss;

    // call da recursing funtion
    cout << "Fibonacci sequence:" << endl;
    for (int yas = 0; yas < biss; ++yas) {
        cout << fibonacci(yas) << ", ";
    }
    cout << endl;

    return 0;
}