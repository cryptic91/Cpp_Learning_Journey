#include<iostream>

using namespace std;

int main () {

    while(1){

        int num ;
        cout << "Guess a number between 1 - 5 : ";
        cin >> num;

        if (num == rand()%5 + 1){
            cout << "You have won." << endl;
            break;
        }
        else {
            cout << "You have lost."<< endl;
        }

    }

    return 0;
}