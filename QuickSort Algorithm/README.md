### Quick Sort Algorithm
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

### Pseudo code

```
/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pivot is partitioning index, arr[pivot] is now
           at right place */
        pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);  // Before pivot
        quickSort(arr, pivot + 1, high); // After pivot
    }
}
```

```
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
partition (arr[], low, high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}
```

### Code
You will find a Java file code.

```
### Test Case.
Input = {10, 7, 8, 9, 1, 5}
Output = {1, 5, 7, 8, 9, 10}
```