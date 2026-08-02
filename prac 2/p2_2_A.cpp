#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of book codes: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted book codes:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter target code: ";
    cin >> target;

    int low = 0, high = n - 1;
    int pos = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            pos = mid;
            break;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (pos != -1){
        cout << "Found at position " << pos;
    }else{
        cout << "Not Found";
}

    return 0;
}
