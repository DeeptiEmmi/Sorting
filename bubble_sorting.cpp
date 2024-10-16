//bubble sort
//Deepti Emmi
//23070123049
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int arr[5] = {50, 22, 96, 11, 7};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline for better output formatting

    return 0;
}

/*
OUTPUT: 
The sorted array is: 7 11 22 50 96 

  */
