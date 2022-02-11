#include<iostream>

using namespace std;

int main () {

    float tempc, celsius, tempf, fahrenheit;

    cout << "Enter celsius temperature: ";
    cin >> tempc;

    fahrenheit = 1.8 * tempc + 32.0 ;
    cout << tempc << " degree celsius = " << fahrenheit << " degree fahrenheit." << endl;

    cout << "Enter fahrenheit temperature: ";
    cin >> tempf ;

    celsius = (tempf - 32.0 ) / 1.8;
    cout << tempf << " degree fahrenheit = " << celsius << " degree celsius." << endl;

    return 0;
}