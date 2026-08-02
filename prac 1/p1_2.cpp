#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of borrow records: ";
    cin >> n;

    int books[n];

    cout << "Enter Book IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    cout << "Book IDs borrowed more than once:\n";
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (books[i] == books[j])
                count++;
        }

        int printed = 0;
        for (int k = 0; k < i; k++) {
            if (books[i] == books[k])
                printed = 1;
        }

        if (count > 1 && printed != 1){
            cout << books[i] << " ";}
    }

    return 0;
}
