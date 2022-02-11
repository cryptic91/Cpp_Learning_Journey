#include<iostream>

using namespace std;

int main () {

    int i, x, y, n, fib;

    cout << "Enter the range: ";
    cin >> n;

    cout << "0 + 1 ";
    x=1;
    y=1;

    for (x=0,i=0; i<n; i++)
    {
        fib = x + y;
        cout << "+ " << fib << " ";
        x = y;
        y = fib;
    }
    
    return 0;
}


// 0 1 1 2 3 5 8 13