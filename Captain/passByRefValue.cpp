#include<iostream>

using namespace std;

void byValue(int num){
    num += 5;
}

void byReference(int *num){
    *num += 5;
}

int main () {

    cout << "Enter a value: ";
    int num1;
    cin >> num1;

    cout << "Before passing value: " << num1 << endl;
    byValue(num1);
    cout << "After passing value: " << num1 << endl << endl;

    cout << "Enter a value: ";    
    int num2;
    cin >> num2;

    cout << "Before passing value: " << num2 << endl;
    byReference(&num2);
    cout << "After passing value: " << num2 << endl;

    return 0;
}

/***********
 * Why the answer is different in two methods???
 * ==
 * in the process of Pass by value, a copy of num1 has sent to the funtion.
 * that's why the main value of num1 won't change.
 * on the other hand, 
 * In pass by reference, the address of num2 was sent and which was captured by a pointer in the funtion.
 * That's why the main value will gonna change.
 */