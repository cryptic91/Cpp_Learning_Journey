#include<iostream>

using namespace std;

int main () {

    int n;
    cout << "Enter a number: ";

    cin >> n;

    int x[n] , y[n] , r[n];

    for(int i=0; i<n; i++) {
        cout << "Enter " << i+1 << " no input: " ;
        cin >> x[i];
    }

    for(int i=0; i<n; i++) {    // copy
        y[i] = x[i];
    }

    int j;
     for(int i=0,j=n-1; i<n; i++,j--) {   // reverse
        r[j] = y[i];
    }   

    cout << "\tArray 1:" << endl;
    for(int i=0; i<n; i++) {
        cout << x[i] << " " ;
    }
    cout << endl;

    cout << "\tArray 2(copied):" << endl;
    for(int i=0; i<n; i++) {
        cout << y[i] << " " ;
    }

    cout << endl;

    cout << "\tReverse array:" << endl;
    for(int i=0; i<n; i++) {
        cout << r[i] << " " ;
    }

    return 0;
}