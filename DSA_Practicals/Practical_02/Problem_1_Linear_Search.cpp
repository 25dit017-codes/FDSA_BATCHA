#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}

int linearSearchRecursive(int arr[], int n, int target, int index)
{
    if(index == n)
        return -1;

    if(arr[index] == target)
        return index;

    return linearSearchRecursive(arr, n, target, index + 1);
}

int main()
{
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;

    int arr[100];

    cout << "Enter license plate numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target license plate: ";
    cin >> target;

    int result1 = linearSearch(arr, n, target);
    int result2 = linearSearchRecursive(arr, n, target, 0);

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
