#include<iostream>

using namespace std;

int main () {

    int num, temp, x,y;

    cout<< "Enter an integer number: ";
    cin >> num;

    int l = to_string(num).length() ;

    temp = num;
    y=0;
    for (int i=0; i<l; i++){

        x = num % 10;
        num /= 10;

        y *= 10;
        y += x; 
    }

    // cout << y << endl;

    if (temp == y) 
    cout << temp << " is palindrome." << endl;
    else
    cout << temp << " is not palindrome." << endl;

    return 0;
}