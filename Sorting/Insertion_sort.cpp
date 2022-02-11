#include<iostream>

using namespace std;

int main () {

    int n;
    cout << "Enter index: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << i+1 << " no input : " ;
        cin >> arr[i];
    }

    int i, j, item;

    for(i=1; i<n; i++){
        item = arr[i];

        j = i-1;
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            j-- ;
        }
        arr[j+1] = item;
    }

    cout << "Insertion sort array: ";
    
    for(int k=0; k<n; k++){
        cout << arr[k] << " " ;
    }

    return 0;
}