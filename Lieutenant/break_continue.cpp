#include<iostream>

using namespace std;

int main () {

    for (int i=1; i<=10; i++){
        if (i==5) break;
        cout << i << " I'm Muslim." << endl;
    }

    cout << endl << endl;

    for (int i=1; i<=10; i++){
        if (i==5) continue;
        cout << i << " I live in Bangladesh." << endl;
    }

    return 0;
}