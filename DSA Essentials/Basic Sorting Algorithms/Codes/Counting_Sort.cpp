#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

void counting_sort(int arr[], int size)
{
    int largest = -1;

    for (int i = 0; i < size; i++)
    {
        largest = max(largest, arr[i]); // Finding largest element to calculate the size of freq array
    }

    vector<int> freq_arr(largest + 1, 0); // Initialize freq array with all 0s.

    for (int i = 0; i < size; i++)
    {
        freq_arr[arr[i]]++; // Update freq array with corresponding elements in given array
    }

    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq_arr[i] > 0) // Put back all elements back into the original array
        {
            arr[j] = i;
            j++;
            freq_arr[i]--;
        }
    }
}

int main()
{
    int arr[] = {23, 6, 7, 4, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    counting_sort(arr, size);
    printArray(arr, size);
}