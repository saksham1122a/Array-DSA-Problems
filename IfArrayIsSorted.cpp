#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // check if current element is greater than next element
            return false;   // if found, array is not sorted
        }
    }
    return true;  // if no such element is found, array is sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array, (arr)/sizeof(arr[0]) means total size of array divided by size of one element to find number of elements

    cout << (isSorted(arr, n) ? "Sorted" : "Not Sorted");  // print result
}
