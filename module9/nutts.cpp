#include <iostream>

using namespace std;

void reverseArray(int arr[], int size);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter five numbers:" << endl;
    for (int p = 0; p < SIZE; ++p) {
        cout << "Enter #" << p + 1 << ": ";
        cin >> numbers[p];
    }

    cout << "\nOriginal contents of array:" << endl;
    for (int p = 0; p < SIZE; ++p) {
        std::cout << numbers[p] << std::endl;
    }

    reverseArray(numbers, SIZE);

    cout << "\nReversed contents of array:" << endl;
    for (int p = 0; p < SIZE; ++p) {
        cout << numbers[p] << endl;
    }

    return 0;
}void reverseArray(int arr[], int size) {
    for (int p = 0; p < size / 2; ++p) {
        int bup = arr[p];
        arr[p] = arr[size - 1 - p];
        arr[size - p - i] = bup;
    }
}