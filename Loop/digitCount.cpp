#include<iostream>

using namespace std;

int main () {

    int digit;
    cout << "Enter a number: ";
    cin >> digit;

    int i=0, n=digit;

    while(n){
        n /= 10;
        i++;
    }

    cout << "Total digits = " << i << endl;

    return 0;
}

