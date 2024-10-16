//Deepti Emmi
//23070123049
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 17, 56, 256, 70};
    int n = 5;

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; // Assume the minimum is the first element of the unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j; // Update the index of the minimum element
            }}
        // Swap the found minimum element with the first element
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
        }
    }

    // Output the sorted array
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline for better output formatting

    return 0;
}

/*
OUTPUT: 
The sorted array is: 17 23 56 70 256 
*/
