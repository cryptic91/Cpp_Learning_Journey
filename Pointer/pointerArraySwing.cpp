#include<iostream>

using namespace std;

void reverse (int *p, int l){
    for(int i=l-1; i>=0; i--){

        cout << *(p+i) << " ";
    }
}

// 3[0], 8[1], 8[2], 2[3]   = 4
// 1000, 1004, 1008, 1012
// 1000+12, 1000+8, 1000+4, 1000+0

int main () {

    int n;
    cout << "Enter array index: ";
    cin >> n;

    int array[n];

    for(int i=0; i<n; i++){
        cout << i+1 << " no input: " ;
        cin >> array[i];
    }

    int *p ;
    p = array;

    reverse(p,n);

    return 0;
}