#include<bits/stdc++.h>

using namespace std;

int main () {

    int base, power;
    cout << "Enter base & power: ";
    cin >> base >> power;

    int result = pow(base,power);

    cout << "Result = " << result << endl;

    return 0 ;
}