#include<bits/stdc++.h>

using namespace std;

struct Football {
    string team, captain;
    int player;
    double income;
};

void Print_structure(Football football[], int num){

    for(int i=0; i<num; i++){
        cout << "Team name: " << football[i].team << endl;
        cout << "Total players: " << football[i].player << endl;
        cout << "Net income: " << football[i].income << endl;
        cout << "Captain name: " << football[i].captain << endl;
        cout << "================================" << endl;
    }
}

int main () {

    int num;
    cout << "How many team info you want to enter: " ;
    cin >> num;
    cout << endl;

    Football f[num];

    int i;
    
    for(i=0; i<num; i++){

        cout << "\tEnter " << i+1 << " no team info: " << endl;

        cout << "Enter team name: " ;
        cin >> f[i].team ;
        cout << "Enter player number: " ;
        fflush(stdin);
        cin >> f[i].player ;
        cout << "Enter net income: " ;
        fflush(stdin);
        cin >> f[i].income ;
        cout << "Enter team captain: " ;
        fflush(stdin);
        cin >> f[i].captain ;

    }

    // print by function
    Print_structure(f,num);

    // print by FOR loop
    
    // for(int i=0; i<num; i++){
    //     cout << "Team name: " << f[i].team << endl;
    //     cout << "Total players: " << f[i].player << endl;
    //     cout << "Net income: " << f[i].income << endl;
    //     cout << "Captain name: " << f[i].captain << endl;
    //     cout << "================================" << endl;
    // }

    return 0;
}