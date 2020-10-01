#include <iostream>
#include <vector>

/**
 * @brief vector based implementation
 * @param a std::vector
 * @param l first index of the range to search
 * @param r last index of the range to search
 * @param x integer to search
 */
int binary_search(const std::vector<int> &a, int l, int r, int x)
{
    // invalid condition -- means element doesn't exist
    if (r < l)
        return -1;

    int mid = l + (r - l) / 2;

    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        return binary_search(a, l, mid - 1, x); // search to left
    else
        return binary_search(a, mid + 1, r, x); // search to right
}

/**
 * @brief array based implementation
 * @param a array int[]
 * @param l first index of the range to search
 * @param r last index of the range to search
 * @param x integer to search
 */
int binary_search(int a[], int l, int r, int x)
{
    // invalid condition -- means element doesn't exist
    if (r < l)
        return -1;

    int mid = l + (r - l) / 2;

    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        return binary_search(a, l, mid - 1, x); // search to left
    else
        return binary_search(a, mid + 1, r, x); // search to right
}

int main()
{
    int a[] = {1, 2, 5, 7, 8};
    int size = sizeof(a)/sizeof(a[0]);

    std::vector<int> b = {1, 2, 5, 7, 8};

    std::cout << binary_search(a, 0, size, 4) << "\n";
    std::cout << binary_search(b, 0, b.size(), 7) << "\n";

    return 0;
}