#include<iostream>

using namespace std;

void odd(int x){

    if(x>0){
        x--;

        odd(x);
        
        if((x+1)%2!=0){
            cout << x+1 << " " ;
        }
    }
    return ;
}

void even(int x){

    if(x>0){
        x--;

        even(x);
        
        if((x+1)%2==0){
            cout << x+1 << " " ;
        }
    }
    return ;
}

int main () {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Odd numbers : " ;
    odd(n) ;

    cout << endl;

    cout << "Even numbers: " ;
    even(n) ;

    return 0;
}