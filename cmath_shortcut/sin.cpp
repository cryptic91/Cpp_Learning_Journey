#include<bits/stdc++.h>

using namespace std;

int main () {

    float d, v;
    cout << "Enter a degree & value: " ;
    cin >> d >> v ;

    cout << "sin(" << d << ") = " << sin(d) << endl;
    cout << "sin-1(" << v << ") = " << asin(v) << endl;
    cout << "sinh(" << d << ") = " << sinh(d) << endl;
    cout << "sinh-1(" << v << ") = " << asinh(v) << endl;

    return 0;
}