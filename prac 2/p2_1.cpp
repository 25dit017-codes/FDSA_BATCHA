#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of plates: ";
    cin >> n;

    int plate[n];

    cout << "Enter plate numbers:\n";
    for (int i = 0; i < n; i++){
        
    
        cin >> plate[i];
        
    }

    cout << "Enter target plate: ";
    cin >> target;

    int position = -1;

    for (int i = 0; i < n; i++) {
        if (plate[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1){
        cout << "Found at position " << position;
    }
        
    else{
        cout << "Not Found";
    }

    return 0;
}
