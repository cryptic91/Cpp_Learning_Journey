#include<bits/stdc++.h>

using namespace std;

struct Football {
    string team, cap;
    int player;
    double income;
};

int main () {

    Football f[100];

    for(int i=0; i<100; i++){    
        cout << "Enter info of " << i+1 << " team: " << endl;
        cin >> f[i].team;
        fflush(stdin);
        cin >> f[i].player;
        fflush(stdin);
        cin >> f[i].income;
        fflush(stdin);
        cin >> f[i].cap;
    }

    for(int i=0; i<100; i++){
        cout << "Team name: " << f[i].team << endl;
        cout << "Total players: " << f[i].player << endl;
        cout << "Net income: " << f[i].income << endl;
        cout << "Captain name: " << f[i].cap << endl;
    }

    return 0;
}