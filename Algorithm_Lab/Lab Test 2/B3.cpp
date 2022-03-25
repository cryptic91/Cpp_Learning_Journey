#include<bits/stdc++.h>

using namespace std;

int main () {

    string s;
    cin >> s;
    char arr[(s.size()/2) + 1];

    int i,j;

    for(j=0,i=0; i<s.size(); i=i+2,j++){
        arr[j] = s[i];
    }

    sort(arr, arr + ((s.size()/2) + 1));

    for(j=0,i=0; i<s.size(); i=i+2,j++){
        s[i] = arr[j];
    }

    cout << s << endl;

    return 0;
}