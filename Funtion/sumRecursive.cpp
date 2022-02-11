#include<iostream>

using namespace std;

void display2(int y){
    if(y>0){
        y--;
        display2(y);

        if(y!=0){
            cout << y+1 << " + ";
        }
        else{
            cout << y+1 << " = ";
        }

        // cout << y+1 << " + " ;
    }
    return;
}

int sum (int n){

    if(n>0){

        return (( sum(n-1) ) + n);     // 1 2 3 4 5
    }

    else
    
    return 0;

}

int main () {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Summation is : ";
    display2(n);
    cout << sum(n) << endl;

    return 0;

}