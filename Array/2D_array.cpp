#include<bits/stdc++.h>

using namespace std;

int main () {

    int row, column;
    cout << "Input row & column: ";
    cin >> row >> column;

    int arr[row][column];

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout << "Array[" << i+1 << "][" << j+1 << "] = " ;
            cin >> arr[i][j] ;
        }
    }

    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            // cout << "Array[" << i << "][" << j << "]" ;
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}