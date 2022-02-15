#include<bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int i, j, next;

    for(int i=1; i<n; i++){
        next = a[i];
        j = i-1;

        while(a[j] > next && j >= 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = next;
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " " ;
    }
    cout << endl;

    int median;

    if(n%2 != 0){
        median = (n+1)/2 ;
    }
    else {
        median = (n/2)+1 ;
    }

    cout << a[median-1] << endl;

    return 0;
}

/*
Q1. Find the Median
Mr. X is a student of Computer Science. He is facing a problem and  needs your help to solve it.
The problem is, you will be given N integer numbers( 4<n<=100) which are arranged side by side (x1,x2,x3,x4,.....).
Now you have to sort those items in ascending order. After doing this , your job is to print the items in a sorted way and find the median.
[NB: when N is odd  , Median= (N+1)/2; When N is even Median= (N/2)+1 ]

Sample Input: 
7
4 7 11 2 9 3 5
Sample Output:
2 3 4 5 7 9 11
5
*/