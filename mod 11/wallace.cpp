#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& numbers, int start, int end) {
    if (start >= end) {
        return; 
    }
    swap(numbers[start], numbers[end]);
    reverseVector(numbers, start + 1, end - 1);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    reverseVector(numbers, 0, numbers.size() - 1);
    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}