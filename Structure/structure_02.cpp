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

    Football f1,f2;

    f1.team = "Real Madrid";
    f1.player = 11;
    f1.income = 382.71;
    f1.captain = "Ronaldo";
    Print_structure(f1);

    f2.team = "FC Barcelona";
    f2.player = 11;
    f2.income = 371.82;
    f2.captain = "Messi";
    Print_structure(f2);

    return 0;
}