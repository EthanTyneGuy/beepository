#include <iostream>
using namespace std;
// EEE
// E
// EEE
// E
// EEE
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 1 || i == 3 || i == 5) {
                cout << "*";
            } else if (j == 1) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}