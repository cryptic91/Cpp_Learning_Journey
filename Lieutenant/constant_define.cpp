#include<iostream>

#define PI 3.1416 

using namespace std;

int main () {

    const double g = 9.8 ;
    double G = 9.99;

    cout << "\tPI = " << PI << "\n\tg = " << g <<" G = " <<G;
    // const can't be changed
    // define can't be changed

    // PI = 3;   // error
    // g = 9;    // error
    G = 7.99;
    
    return 0;
}