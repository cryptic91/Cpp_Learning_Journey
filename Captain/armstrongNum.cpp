#include<iostream>

using namespace std;

int main () {

    int num, r=0, x=0, temp;

    cout << "Enter an integer number: " ;
    cin >> num;
    temp = num;
    int l = to_string(num).length();

    while (l--) { 

        x = num % 10;
        num /= 10;
        r += x*x;
        
    }

    cout << "Armstrong number of "<< temp << " is " << r << endl;

    return 0;
}