#include <iostream>
using namespace std;
//Hello Everybody, my name is Multiplier
int main() {
    int i = 0;

    cout << "0 through 10 multiplied by 2 and by 10:" << endl;
    while (i <= 10) {
        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << (i * 2) << endl;
        cout << "Multiplied by 10: " << (i * 10) << endl;
        i++;
    }

    return 0;
}