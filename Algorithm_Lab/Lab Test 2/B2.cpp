#include<bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    while(n--){
        int a,b;
        cin >> a >> b;

        if(a < b){
            for(int i=a; i<=b; i++){
                if(i%2 == 0){
                    cout << i*i*i << " " ;
                }
            }
        }
        else {
            for(int i=b; i<=a; i++){
                if(i%2 == 0){
                    cout << i*i*i << " " ;
                }
            }
        }
        cout << endl;
    }

    return 0;
}