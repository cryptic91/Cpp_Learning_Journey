#include <iostream>

using namespace std;

int main(){

    cout << "Enter a later: ";
    char c;
    cin >> c;

    // by switch case

    c = toupper(c);

    switch (c){
    case 'A':
        // cout << c << "is a vowel." << endl;
        // break;
    case 'E':
        // cout << c << " is a vowel." << endl;
        // break;
    case 'I':
        // cout << c << " is a vowel." << endl;
        // break;
    case 'O':
        // cout << c << " is a vowel." << endl;
        // break;
    case 'U':
        cout << c << " is a vowel." << endl;
        break;
    default:
        cout << c << " is a consonant." << endl;
    }

    // by if else
    
    // converting to upper and lowercase
    // c = toupper(c);
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o'){
        cout << c << " is a vowel." << endl;
    }
    else{
        cout << c << " is a consonant." << endl;
    }

    return 0;
}