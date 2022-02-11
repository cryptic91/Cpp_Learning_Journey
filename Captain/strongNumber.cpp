#include<iostream>

using namespace std;

int fact (int n){
    int f=1;
    for(int i=1; i<=n; i++) {
        f *= i;
    }
    return f;
}

int main () {

    cout << "Enter a number: " ;
    int num, x, y, sum=0;
    cin >> num;

    int temp = num;
    int l = to_string(num).length();

    for(int i=0; i<l; i++){

        x = num%10;
        num /= 10;
        y =  fact(x);
        sum += y;
    }

    if (sum == temp){
        cout << temp << " is a strong number." << endl;
    }
    else{
        cout << temp << " is not a strong number." << endl;
    }

    return 0;
}