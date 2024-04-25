#include <iostream>
using namespace std;

void findMinAndMax(int a, int b, int c, int &min, int &max) {
    min = a;
    max = a;
    if (b < min){
        min = b;
    }
    if (b > max){ 
        max = b;
    }
    if (c < min){ 
        min = c;
    }
    if (c > max){
        max = c;
    }
}
int main() {
    int num1 = -50, num2 = 53, num3 = 78;
    int smallest, largest;
    findMinAndMax(num1, num2, num3, smallest, largest);

    cout << "The smallest number is: " << smallest << endl;
    cout << "The largest number is: " << largest << endl;

    return 0;
}