#include<iostream>

using namespace std;

int factorial (int x){

    if(x>0){

        if(x!=1){
            cout << x << " x ";
        }
        else{
            cout << x << " = ";
        }

        return (x * factorial(x-1));
    }
    else {
        return 1;
    }
}

int main () {

    cout << "Enter a value: ";
    int num, y=1;
    cin >> num;

    cout << factorial(num);
    // cout << "Factorial = " << factorial(num);

    return 0;
}