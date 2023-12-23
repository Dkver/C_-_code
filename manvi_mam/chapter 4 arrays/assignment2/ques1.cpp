#include <iostream>
#include <vector>
using namespace std;
    vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int m = arr1.size(), n = arr2.size();
    vector<int> merged(m + n);

    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and insert the smaller one into the merged array
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from either array
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 6};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    // Example with a different input
    arr1 = {1, 3, 5};
    arr2 = {2, 4, 6};
    merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
