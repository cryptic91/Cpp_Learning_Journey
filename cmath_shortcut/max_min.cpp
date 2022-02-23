#include<bits/stdc++.h>

using namespace std;

int main () {

    double x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum number: " << fmax(x,fmax(y,z)) << endl;
    cout << "Minimum number: " << fmin(x,fmin(y,z)) << endl << endl;

    double num1, num2;
    cout << "Enter two numbers: " ;
    cin >> num1 >> num2 ;
    
    cout << "Maximum number: " << fmax(num1,num2) << endl;
    cout << "Minimum number: " << fmin(num1,num2) << endl;

    return 0 ;
}