#include<bits/stdc++.h>

using namespace std;

int main () {

    int size;
    cout << "Enter array size: " ;
    cin >> size ;

    int arr[size] ;

    for(int i=0; i<size; i++){
        cout << i+1 << " no index: " ;
        cin >> arr[i];
    }

    sort(arr, arr + size);
    cout << "Array in ascending  way: " ;
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl ;

    sort(arr, arr + size, greater<int>());
    cout << "Array in descending way: " ;
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl ;

    return 0;
}