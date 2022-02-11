#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    float x,y;
    cout << "\nEnter two float number: ";
    cin >> x >> y;

    cout << showpoint;      // will show zero after point (total 6 blocks)

    cout << fixed;       // setprecision will work after point

    cout << setprecision(6);  // will show total 12 values

    cout << setw(21)  << "Summation = " << x+y << endl;
    cout << setw(21)  << "Subtraction = " << x-y << endl;

    cout << noshowpoint;    // no extra zero after point

    cout << setw(21)  << "Multiplication = " << x*y << endl;
    double d = x/y;
    cout  << setw(21) << "division = " << d << endl;

    double area = ((double)1/2 )* x * y;    // used typecast bcz 1/2 will show integer value
    cout << setw(21) << "area of a triangle = " << area << endl;

    return 0;
}
