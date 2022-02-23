#include<bits/stdc++.h>

using namespace std;

int main () {

    float x;
    cout << "Enter a float number: " ;
    cin >> x;

    cout << "Near by int of " << x << " = " << nearbyint(x) << endl;
    cout << "Near by int of " << x << " = " << nearbyintf(x) << endl;
    cout << "Near by int of " << x << " = " << nearbyintl(x) << endl;

    return 0;
}