#include<bits/stdc++.h>

using namespace std;

int main () {

    string s = "ADFBHEGC";
    cout << "Before sort: "<< s << endl;
    sort(s.begin(),s.end());
    cout << "After  sort: " << s << endl;
    return 0;
}