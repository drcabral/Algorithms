# Three-way String Quicksort 

Three-way String QuickSort is an algorithm to sort strings lexicographic order.
This algorithm is a hybrid of two algorithms:
* quicksort
* MSD Radix Sort

In this solution, we do not assume that the length of the strings in the
array are equal. We also use a cutoff, like QuickSort, to optimize
when we the size of the subarrays are getting smaller.

## Test Cases
Test Case #1

<code>
input: [she, sells, seashell, on, the, seashore, the, shells, she, sells, are, seashells, im, sure]

output: [are, im, on, seashell, seashells, seashore, sells, sells, she, she, shells, sure, the, the]
</code>

Test Case #2

<code>
input: [64, 34, 25, 12, 22, 91, 90, 1, 3, 100]

output: [1, 100, 12, 22, 25, 3, 34, 64, 90, 91]
</code>
