# Arrays

An array is a collection of elements of the same type placed in contiguous memory locations.

**Creating and accessing arrays:**

```cpp
#include <iostream>
using namespace std;

int main()
{
	// Creating an integer array named arr of size 10.
	int arr[10];
	// accessing element at 0 index and setting its value
	// to 5.
	arr[0] = 5;
	// access and print value at 0 index we get the output
	// as 5.
	cout << arr[0];
	return 0;
}
```

### Advantages

1. Good for random access.
2. Better Cache locality

### Disadvantages

1. Can’t change size after declaration.
2. Insertion and deletion is difficult.