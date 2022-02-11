#include<bits/stdc++.h>

using namespace std;

int main () {

    char str1[100];
    cout << "Enter a string: ";
    cin.get(str1, 100);          // way 1 

    cout << "You entered: " << str1 << endl;

    fflush(stdin);

    string st;
    cout << "Enter a word: ";
    cin >> st;
    cout << st << endl;

    fflush(stdin);

    string str;
    cout << "Enter a sentence: ";
    // gets(str);
    getline(cin, str);       // way 2
    cout << str << endl;

    return 0;
}