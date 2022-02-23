#include<bits/stdc++.h>

using namespace std;

int main () {

    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "e^" << x << " = " << exp(x) << endl;
    cout << "e^" << x << "-1 = " << expm1(x) << endl;

    return 0;
}