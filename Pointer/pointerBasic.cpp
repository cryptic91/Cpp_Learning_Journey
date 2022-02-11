#include<iostream>

using namespace std;

int main () {

    int *s, num ; 

    cin >> num ;

    s = &num ;

    cout << "s = " << s << endl;         // address
    cout << "*s = "  << *s << endl;      // address represent value

    cout << "num = "  << num << endl;    // value
    cout << "&num = "  << &num << endl;  // & = address

    cout << "Enter two number: ";
    
    int num1, num2;
    cin >> num1 >> num2;

    // cout << num1+num2 << endl;
    
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;

    cout << "Summation : " << (*p1 + *p2) << endl;

    return 0;
}

