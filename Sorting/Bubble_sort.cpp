#include<bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cout << "Enter index: " ;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << i+1 << " no element : " ;
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){

            int temp = 0;

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

    }

    cout << "Bubble short array: ";
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}