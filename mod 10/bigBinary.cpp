#include <iostream>
#include <vector>

using namespace std;

int recursiveBinarySearch(const vector<int>& arr, int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
            return recursiveBinarySearch(arr, left, mid - 1, target);
        }

        return recursiveBinarySearch(arr, mid + 1, right, target);
    }
    return -1;
}

int main() {
    int n, target;

    cout << "Enter number of elements in the sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> target;

    int result = recursiveBinarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Number found at index " << result << endl;
    } else {
        cout << "It isnt here though???" << endl;
    }

    return 0;
}
