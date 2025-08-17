#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid; // found
        }
        else if (arr[mid] < target) {
            start = mid + 1; // search right
        }
        else {
            end = mid - 1; // search left
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = { -23, 5, 7, 12, 18, 21 }; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Found at index: " << result << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
