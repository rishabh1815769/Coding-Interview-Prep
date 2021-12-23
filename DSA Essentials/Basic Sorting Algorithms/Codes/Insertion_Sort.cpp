#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (curr < arr[prev] && prev >= 0)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int arr[] = {23, 6, 7, 4, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);
    printArray(arr, size);
}