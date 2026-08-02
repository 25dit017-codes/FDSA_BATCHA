#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target, int index) {
    if (index == n){
        return -1;
    }

    if (arr[index] == target){
        return index;
    }

    return linearSearch(arr, n, target, index + 1);
}

int main() {
    int n, target;

    cout << "Enter number of plates: ";
    cin >> n;

    int arr[n];

    cout << "Enter plate numbers:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter target plate: ";
    cin >> target;

    int result = linearSearch(arr, n, target, 0);

    if (result != -1){
        cout << "Found at position " << result;
    }else{
        cout << "Not Found";
    }

    return 0;
}
