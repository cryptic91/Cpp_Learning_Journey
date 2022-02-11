#include<iostream>

using namespace std;

int main () {

    int i, j, n;

    cout << "Enter a number: " ;
    cin >> n;
    cout << endl;

    for (i=1; i<=n; i++) {

        for (j=1; j<=10; j++) {

            cout << i << " x " << j << " = " << i*j << endl;

        }

        printf("\n\n");
    }

    return 0;
}