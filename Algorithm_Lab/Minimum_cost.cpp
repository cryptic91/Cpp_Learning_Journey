#include<bits/stdc++.h>

using namespace std;

int binary_search(int A[], int n, int searchItem){
    int l=0, r=n-1, count = 0 ;
    
    while(l<=r){
        int m= (l+r)/2;
        
        count ++ ;
        
        if(A[m] < searchItem){
            l = m + 1 ;
        }
        else if(A[m] > searchItem){
            r = m - 1;
        }
        else
            return count ;
    }
    return count;
}

int main () {
    
    int n;
    cin >> n;
    
    int A[n];
    for(int i=0; i<n; i++){
        cin >> A[i] ;
    }
    
    int search;
    cin >> search;
    
    int x = binary_search(A, n, search);
    
    cout << x << endl;
    
    return 0;
}