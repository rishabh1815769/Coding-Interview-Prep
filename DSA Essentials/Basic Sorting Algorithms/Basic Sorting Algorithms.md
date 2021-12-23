# Basic Sorting Algorithms

## Bubble Sort

**Bubble sort** is a sorting algorithm that compares two adjacent elements and swaps them until they are not in the intended order.

### Bubble Sort Algorithm

```cpp
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
```

## Selection Sort

⇒ Selection sort is an attempt to localize the exchanges of array elements by finding a misplaced element first and putting it in its final place. 

⇒ The element with the lowest value is selected and exchanged with the element in the first position. Then, the smallest value among the remaining elements data[1], . . . , data[n-1] is found and put in the second position. This selection and placement by finding, in each pass i, the lowest value among the elements data[i], . . . , data[n-1] and swapping it with data[i] are continued until all elements are in their proper positions.

### Algorithm

```cpp
selectionsort(data[],n)
for i = 0 to n-2
	select the smallest element among data[i], . . . , data[n-1];
	swap it with data[i];
```

## Insertion Sort

⇒ Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

⇒ Insertion sort works similarly as we sort cards in our hand in a card game.

### Algorithm

```cpp
insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort
```

## Counting Sort

⇒ Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. 

⇒ The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

### Algorithm

```cpp
countingSort(array, size)
  max <- find largest element in array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and 
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
```