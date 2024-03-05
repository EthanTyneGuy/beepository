#include <iostream>

using namespace std;

void reverseArray(int arr[], int size);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter five numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nOriginal contents of array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << std::endl;
    }

    reverseArray(numbers, SIZE);

    cout << "\nReversed contents of array:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}