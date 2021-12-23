#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int least = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[least])
            {
                least = j;
            }
        }

        swap(arr[least], arr[i]);
    }
}

int main()
{
    int arr[] = {23, 6, 7, 4, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size);
    printArray(arr, size);
}