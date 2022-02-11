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

    int i, j, temp, min;

    for(i=0; i<n-1; i++){
        min = i;

        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "Selection short array: ";
    
    for(int k=0; k<n; k++){
        cout << arr[k] << " " ;
    }

    return 0;
}