#include<iostream>

using namespace std;

int main () {

    cout << "\t======== Infinity Sum ========"<< endl;
    cout << "\t__input double zero to stop__" << endl;

    while(1){
        int num1, num2;
        cout << "\nEnter two numbers: ";
        cin >> num1 >> num2 ;

        if (num1 == 0 && num2 == 0){
            break;
        }
        else{
        cout << "Summation = " << num1+num2 << "" << endl;
        }
    }

    return 0;
}