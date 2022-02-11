#include<bits/stdc++.h>

using namespace std;

struct Football {
    string team, captain;
    int player;
    double income;
};

void Print_structure(Football football){
    cout << "Team name: " << football.team << endl;
    cout << "Total players: " << football.player << endl;
    cout << "Net income: " << football.income << endl;
    cout << "Captain name: " << football.captain << endl;
    cout << "================================" << endl;
}

int main () {

    Football f1;
    cout << "\tEnter your team info" << endl;

    cout << "Enter team name: " ;
    cin >> f1.team ;
    cout << "Enter player number: " ;
    fflush(stdin);
    cin >> f1.player ;
    cout << "Enter net income: " ;
    fflush(stdin);
    cin >> f1.income ;
    cout << "Enter team captain: " ;
    fflush(stdin);
    cin >> f1.captain ;

    Print_structure(f1);

    return 0;
}