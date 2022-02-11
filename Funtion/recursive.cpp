#include<iostream>

using namespace std;

void display1(int x){
    if(x>0){
        cout << x << " " ;
        x--;
        display1(x);
    }
    return;
}

void display2(int y){
    if(y>0){
        y--;
        display2(y);
        cout << y+1 << " " ;
    }
    return;
}

int main () {

    int x;
    cout << "Enter a integer number: ";
    cin >> x;
    int y = x;

    display1(x);
    cout << endl;
    display2(y);

    return 0;
}