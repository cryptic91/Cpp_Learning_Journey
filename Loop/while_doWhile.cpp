#include<iostream>

using namespace std;

int main () {

    char name[50];
    int n;

    cout << "Enter your name: " ;
    // cin.getline(name,50);      // for full name
    cin >> name;
    cout << "Enter a number: " ;
    cin >> n;
    int m=n;

    while(n>0){
        cout << "Welcome " << name << endl;
        n-- ;
    }

    int i=1;

    do {
        cout << i << " Hello world!!! " << endl;
        i++ ;
        m--;
    } while(m>0) ;


    return 0;
}

    /*****
     * What is the different between while & do while loop  ????
     * 
     * in while loop, condition will be checked first
     * int do while, condition will be checked after going through the statement
     */