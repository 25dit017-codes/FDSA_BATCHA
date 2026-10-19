#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of IDs: ";
    cin >> n;

    int arr[100];

    cout << "Enter IDs: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate IDs: ";

    for(int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }

        if(count > 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
