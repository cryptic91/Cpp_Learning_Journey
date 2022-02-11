#include<iostream>

using namespace std;

int display(int n){
    return (n+1);
}

int main () {

    int rn = rand();
    int n = 7;

    cout << "Random num: " << rn << endl;

    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand() << endl;
    }
    printf("\n");
    
    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand()%2 << endl;  // 0 1
    }
    printf("\n");
    
    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand()%3 << endl;  // 0 1 2
    }
    printf("\n");

    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand()%4 << endl;  // 0 1 2 3
    }
    printf("\n");

    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand()%5 << endl;  // 0 1 2 3 4
    }
    printf("\n");

    for(int i=0; i<n; i++){
        cout << i+1 << " no random number = " << rand()%6 +1 << endl; // 1 2 3 4 5 6
    }
    printf("\n");

    return 0;
}