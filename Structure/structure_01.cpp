#include<bits/stdc++.h>

using namespace std;

struct Football {
    string team, captain;
    int player;
    double income;
};

int main () {

    Football football;

    football.team = "Real Madrid";
    football.player = 11;
    football.income = 382.71;
    football.captain = "Ronaldo";

    cout << "Team name: " << football.team << endl;
    cout << "Total players: " << football.player << endl;
    cout << "Net income: " << football.income << endl;
    cout << "Captain name: " << football.captain << endl;

    return 0;
}