#include<bits/stdc++.h>

using namespace std;

int main () {

    int arr[] = {4,3,5,7,6,2,4,9,5,7,5,2,4} ;

    int size = sizeof(arr)/sizeof(arr[0]);

    // cout << sizeof(arr) << endl;

    int i, search = 9;

    for(i=0; i<size; i++){

        if(search == arr[i]){
            cout << "Found" << endl;
            break;
        }
    }

    if(i == size){
        cout << "Not found" << endl;
    }

    return 0;
}