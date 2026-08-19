#include <iostream>
using namespace std;

void sortColors(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;

            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;

            high--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements (0, 1, 2):" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sortColors(a, n);

    cout << "Sorted array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
