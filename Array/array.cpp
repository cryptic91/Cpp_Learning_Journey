#include<iostream>

using namespace std;

int main () {

    const int n = 4;
    char ch ;
    char arr[n] ;

    for (int i=0; i<n; i++){
        cin >> arr[i] ;
    }

    for (int i=0; i<n; i++){
        cout << arr[i] ;
    }
    cout << "\n";

    char arr[] = "Shanto" ;
    cout << arr ;

    char shanto[100];
    getchar();
    cout << "\nEnter your name: " ;
    cin.getline (shanto,100);

    cout << "Your name is " << shanto << endl;



    return 0;
}