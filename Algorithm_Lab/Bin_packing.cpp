#include<bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;
    
    int group[n];
    for(int i=0; i<n; i++){
        cin >> group[i] ;
    }
    int capacity;
    cin >> capacity;
    
    int arr_bag[n];
    for(int i=0; i<n; i++){
        arr_bag[i] = 0;
    }

    sort(group, group+n, greater<int>());

    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr_bag[j] <= capacity && (arr_bag[j] + group[i]) <= capacity ){
                arr_bag[j] += group[i];
                break;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr_bag[i] != 0){
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}