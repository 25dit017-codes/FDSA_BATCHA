#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;

        else if(target > arr[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int target)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == target)
        return mid;

    if(target > arr[mid])
        return binarySearchRecursive(arr, mid + 1, high, target);

    return binarySearchRecursive(arr, low, mid - 1, target);
}

int main()
{
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    int arr[100];

    cout << "Enter sorted book codes: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target book code: ";
    cin >> target;

    int result1 = binarySearch(arr, n, target);
    int result2 = binarySearchRecursive(arr, 0, n - 1, target);

    if(result1 != -1)
        cout << "Iterative Search: Found at index " << result1 << endl;
    else
        cout << "Iterative Search: Not Found" << endl;

    if(result2 != -1)
        cout << "Recursive Search: Found at index " << result2 << endl;
    else
        cout << "Recursive Search: Not Found" << endl;

    return 0;
}
