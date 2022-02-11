#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    int a;
    cout << "Enter an integer number: ";
    cin >> a;

    cout << "Uninary +" << a << setw(5) << " = " << (+a) << endl;
    cout << "Uninary -" << a << setw(5) << " = " << (-a) << endl;
    cout << "Uninary ++" << a << setw(4) << " = " << (++a) << endl;
    cout << "Uninary --" << a << setw(4) << " = " << (--a) << endl;
    cout << "Uninary " << a << setw(6) << "++ = " << (a++) << endl;
    cout << "Value = " << a << endl;
    cout << "Uninary " << a << setw(6) << "-- = " << (a--) << endl;
    cout << "Value = " << a << endl;

    return 0;
}