#include <iostream>
using namespace std;

// 1. Function to sort array using Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];        // Pick the current element
        int j = i - 1;

        // Move larger elements one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to right
            j = j - 1;
        }
        arr[j + 1] = key;        // Place key in correct position
    }
}

// 2. Function to find kth smallest element
int findKthSmallest(int arr[], int n, int k) {
    insertionSort(arr, n);       // Step 1: Sort the array
    return arr[k - 1];           // Step 2: k-th smallest is at index k-1
}

// 3. Main function to test
int main() {
    int arr[] = {7, 9, 1, 8, 2}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size
    int k = 4;

    int result = findKthSmallest(arr, n, k);
    cout << k << "th smallest element is: " << result << endl;

    return 0;
}
