#include<bits/stdc++.h>

using namespace std;

int main () {

    char s[100];

    cout << "Enter a word with mix upper & lower case: " ;
    cin >> s;

    int upper=0, lower=0, l = strlen(s);

    for(int i=0; i<l; i++){

        if(isupper(s[i])){
            upper ++ ;
        }
        else {
            lower ++ ;
        }
    }
    
    char g[l];

    if(upper>lower){
        for(int i=0; i<l; i++){
            g[i] = toupper(s[i]) ;
        }
    }
    else {
        for(int i=0; i<l; i++){
            g[i] = tolower(s[i]) ;
        }
    }
    cout << g << endl;

    return 0;
}