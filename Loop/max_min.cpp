#include<iostream>

using namespace std;

int main () {

    int a, b, c ;

    cout << "Enter 3 integer numbers: ";
    cin >> a >> b >> c ;

    cout << "\n\n\t||||||| WAY ONE |||||||" << endl << endl;
    if (a > b) {
        if (a > c) {
            cout << "Maximum = " << a << endl;
            if (c < b){ 
            cout << "Minimum = " << c << endl;
            }
            else
            cout << "Minimum = " << b << endl;
        }
        else {
            cout << "Maximum = " << c << endl;
            cout << "Minimum = " << b << endl;
        }
        
    }
    else {
        if (b > c) {
            cout << "Maximum = " << b << endl;
            if (c < a){
            cout << "Minimum = " << c << endl;
            }
            else 
            cout << "Minimum = " << a << endl;
        }
        else {
            cout << "Maximum = " << c << endl;
            cout << "Minimum = " << a << endl;
        }
        
    }

    cout << "\n\n\t||||||| WAY TWO |||||||" << endl << endl;
    if (a > b && a > c){
        cout << "Maxmimum = " << a << endl;

        if (b < c) {
            cout << "Minimum = " << b << endl;
        }
        else {
        cout << "Minimum = " << c << endl;
        }
    }

    else if (b > a && b > c){
        cout << "Maxmimum = " << b << endl;

        if (a < c) {
            cout << "Minimum = " << a << endl;
        }
        else {
        cout << "Minimum = " << c << endl;
        }
    }

    else if (c > b && c > a){
        cout << "Maxmimum = " << c << endl;

        if (b < a) {
            cout << "Minimum = " << b << endl;
        }
        else {
        cout << "Minimum = " << a << endl;
        }
    }

    cout << "\n\n\t||||||| Shot Way |||||||" << endl << endl;

    cout << "Maximum = " << max(a,max(b,c)) << endl;
    cout << "Minimum = " << min(a,min(b,c)) << endl;


    // for 4 numbers:

    // cout << "Minimum = " << min(min(min(a,b),c),d) << endl;
    // cout << "Maximum = " << max(max(a,b),max(c,d)) << endl;


    return 0;
}