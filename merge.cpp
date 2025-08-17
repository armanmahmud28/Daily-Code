#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    // Merge the two halves
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from right half
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted data back to original array
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st >= end) return; // Base case: 1 element

    int mid = st + (end - st) / 2;

    // Sort left half
    mergeSort(arr, st, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge two sorted halves
    merge(arr, st, mid, end);
}

int main() {
    vector<int> arr = {10, 27, 43, 3,};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
