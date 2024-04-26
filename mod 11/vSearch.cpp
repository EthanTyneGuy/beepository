#include <iostream>
#include <vector>
using namespace std;

bool findElement(const vector<int>& numbers, int target, int index) {
    if (index >= numbers.size()) {
        return false;
    }
    if (numbers[index] == target) {
        return true;
    }
    return findElement(numbers, target, index + 1);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    int target = 3;

    if (findElement(numbers, target, 0)) {
        cout << "Target " << target << " found in the vector." << endl;
    } else {
        cout << "Target " << target << " not found in the vector." << endl;
    }

    return 0;
}