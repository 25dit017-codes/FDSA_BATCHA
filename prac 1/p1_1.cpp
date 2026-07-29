#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the total number of items(n):\t";
    cin>>n;

    int arr[n];
    cout<<"Enter the elemnets\n";
    for(int i = 0; i < n;i++){
        cout<<"enter element number "<<i+1<<" :\t";
        cin>>arr[i];
    }

    int k ; 
    cout<<"enter the number of hours(h) :\t";
    cin>>k;

    //for scaling
    k = k % n; 
    if(k != 0 ){

    for (int rotation = 0; rotation < k; rotation++) {
        int last_element = arr[n - 1];
        
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[0] = last_element;
    }

    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    }
    else{
        for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    }
    
    return 0;
}
