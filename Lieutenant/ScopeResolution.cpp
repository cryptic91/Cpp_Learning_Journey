#include<iostream>

using namespace std;

int x = 10;  // global variable
int y = 20;  

void display(){

    // cout << num << endl;       // cant print num cz it declared in main funtion locally!!!
        
    cout << "Outside of main function: " << x << endl;
}


int main () {

    int num = 92;   // local variable for main function
    cout << num << endl;

    cout << "Inside of main function: " << x << endl;  // 10
    display();

    int x = 5;  // local
    cout << "Local variable: " << x << endl;  // global < local !

    cout << "Global variable: " << :: x << endl;  // global > local !

    :: y = 25;  // changing global value

    cout << "Changing Global variable in local: " << y << endl;

    return 0;
}