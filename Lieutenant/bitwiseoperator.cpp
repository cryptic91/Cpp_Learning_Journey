#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    int num1, num2;

    cout << "Enter two integer number: " ;
    cin >> num1 >> num2 ;

    cout << "Bitwise AND of " << num1 << setw(3) << " and " << num2 << " = " << (num1&num2) << endl; 
    cout << "Bitwise OR of " << num1 << setw(3) << " and " << num2 << " = " << (num1|num2) << endl; 
    cout << "Bitwise XOR of " << num1 << setw(3) << " and " << num2 << " = " << (num1^num2) << endl; 
    cout << "Bitwise NOT of " << num1 << setw(3) << " = " << (!num1) << endl; 
    cout << "Bitwise NOT of " << num2 << setw(3) << " = " << (!num2) << endl; 
    cout << "Bitwise SHIFT RIGHT of " << num1 << setw(3) << " = " << (num1>>1) << endl;
    cout << "Bitwise SHIFT RIGHT of " << num2 << setw(3) << " = " << (num2>>1) << endl;
    cout << "Bitwise SHIFT LEFT of " << num1 << setw(3) << " = " << (num1<<1) << endl;
    cout << "Bitwise SHIFT LEFT of " << num2 << setw(3) << " = " << (num2<<1) << endl;

    cout << "\n------------------------------------------------------\n" ;

    int i, j, l ;

    cout << "\t     Bitwise AND" << endl ;
    cout << "\ti\tj\ti&j" << endl;
    for (i=0; i<=1; i++){

        for (j=0; j<=1; j++){
            cout << "\t" << i << "\t" << j << "\t" << (i&j) << endl;
        }
    }

    cout << "\n------------------------------------------------------\n" ;

    cout << "\n\t     Bitwise OR" << endl ;
    cout << "\ti\tj\ti|j" << endl;
    for (i=0; i<=1; i++){

        for (j=0; j<=1; j++){
            cout << "\t" << i << "\t" << j << "\t" << (i|j) << endl;
        }
    }

    cout << "\n------------------------------------------------------\n" ;

    cout << "\n\t     Bitwise NOT" << endl ;
    cout << "\ti\t!i" << endl;
    for (i=0; i<=1; i++){
        cout << "\t" << i << "\t" << !i << endl;
    }

    cout << "\n------------------------------------------------------\n" ;

    cout << "\n\t     Bitwise XOR" << endl ;
    cout << "\ti\tj\ti^j" << endl;
    for (i=0; i<=1; i++){

        for (j=0; j<=1; j++){
            cout << "\t" << i << "\t" << j << "\t" << (i^j) << endl;
        }
    }

    cout << "\n------------------------------------------------------\n" ;

    cout << "\n\t    Bitwise SHIFT RIGHT" << endl;
    int x = 20;
    cout << "\t" << x << " >>1 " << (x>>1) << endl;
    cout << "\t" << x << " >>2 " << (x>>2) << endl;

    cout << "\n------------------------------------------------------\n" ;

    cout << "\n\t    Bitwise SHIFT LEFT" << endl;
    int y = 20;
    cout << "\t" << y << " <<1 " << (y<<1) << endl;
    cout << "\t" << y << " <<2 " << (y<<2) << endl;

    return 0;
}