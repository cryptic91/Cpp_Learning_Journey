#include<bits/stdc++.h>

using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int s, c, num, total = 0;
    cin >> s;
    int p = s;
    sort(arr, arr+n, greater<int>() ) ;
    
    int i=0;
    
    int A[p];
    for(int k=0; k<100; k++){
        A[p] = 0;
    }
    
    while(s>0){

            if(arr[i] <= s)
                c = arr[i];
            i++;
        num = s/c;
        total += num;
        // for(int j=0; j<num; j++){
            // cout << c << " " ;
        // }
        
        A[c] = num;
        
        s -=num*c;
    }
    
    if(s != 0){
        cout<< "Impossible" << endl;
    }
    else{
        cout << total << endl;
        
        for(int i=0; i<p; i++){
            if(A[i] != 0){
                for(int s=0; s<A[i]; s++){
                    cout << i << " " ;   
                }
            }
        }
    }
    
    return 0;
}