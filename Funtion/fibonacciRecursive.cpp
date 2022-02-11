#include<iostream>

using namespace std;

void fibonucci(int n, int m, int num, int temp){

    if(num>=temp){
        
        temp = n + m;
        n = m;
        m = temp;

        cout << temp << " ";

        fibonucci(n,m,num,temp);
    }
    return ;
}

int main () {

    int num;

    cout << "Enter a number: ";

    cin >> num;

    cout << "0 1 ";

    fibonucci(0,1,num,0);

    return 0;
}