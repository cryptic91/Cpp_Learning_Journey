#include<iostream>

using namespace std;

int main () {

    cout << "Enter a number: ";
    int num, x, sum=0;
    cin >> num;

    int l = to_string(num).length();
    
    for(int i=0; i<l; i++){

        x = num%10;
        num /= 10;
        sum += x;

    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}