#include<iostream>

using namespace std;

int main (){

    cout << "Enter two numbers : ";
    int num1, num2;
    cin >> num1 >> num2;

    int max = (num1 > num2) ? num1 : num2 ;
    cout << "Maximum : " << max << endl;

    int min = (num1 < num2) ? num1 : num2 ;
    cout << "Minimum : " << min << endl;

    return 0;
}