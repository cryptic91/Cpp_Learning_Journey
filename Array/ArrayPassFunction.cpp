#include<iostream>

using namespace std;

void Array(int [], int);

int main() {

    int n;
    cout << "Enter array size: " ;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter " << i+1 << " no value: ";
        cin >> arr[i];
    }

    Array(arr,n);

    return 0;
}

void Array (int a[], int l){

    cout << "Array : ";
    for(int i=0; i<l; i++){
        cout << a[i] << " " ;
    }

}
