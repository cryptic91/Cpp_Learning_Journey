#include<iostream>

using namespace std;

int main () {

    int n;
    cout <<"Enter index number: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter input " << i+1 << " no - ";
        cin >> arr[i];
    }

    int s;
    cout << "Enter the number you want to search: ";
    cin >> s;

    for(int i=0; i<n; i++){
        if(s == arr[i]){
            cout << s << " - number is found.";
            return 0;
        }
    }
    cout << s << " - number is not found!!!";

    return 0;
}