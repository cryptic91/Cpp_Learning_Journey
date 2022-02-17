#include<bits/stdc++.h>

using namespace std;

int c = 0;

int partition(int arr[], int left, int right){
    int pivot = arr[left];
    
    while(left != right){
        
        if(pivot == arr[left]){
            
            if(arr[right] > pivot){
                right -- ;
            }
            else if(arr[right] <= pivot){

                swap (arr[left], arr[right]);
                pivot = arr[right];
                left ++ ;
            }
        }
        
        else if (pivot == arr[right]){
            if(arr[left] < pivot){
                left ++ ;
            }
            else if(arr[left] >= pivot){

                swap (arr[left], arr[right]);
                pivot = arr[left];
                right -- ;
            }
        }
    }
    return left;
}

void quick_sort(int arr[], int left, int right){
    if (left < right){
        
        int pivot = partition(arr,left,right);
        c++;
        
        quick_sort(arr,left,pivot-1);
        // c++;
        quick_sort(arr,pivot+1,right);
    }
}

int main () {
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quick_sort(arr,0,n-1);
    
    cout << c << endl;
    
    // for(int i=0; i<=0; i--){
    //     cout << arr[i] << " ";
    // }
    
    for(int i=n-1; i>=0; i--){     // reverse rintthe ascending array
        cout << arr[i] << " ";
    }
    
    return 0;
}


/*
Q1. Sorting Pillars
Alex has some pillars of different heights. He is trying to arrange the pillars in descending order according to their heights. Recently he has learned Divide & Conquer (D&C) algorithm strategy. There is a sorting algorithm in Divide & Conquer whose special case is, f(n) = O(n^2). So, now you have to help Alex to sort the pillars with that particular D&C algorithm. Finally, you need to display k, the number of times the division will be required for sorting and also display the heights in descending order.

Input: At the first line, you have to take the number of pillars, N (1<=N<=100), then, in the second line, you have to take N integer numbers indicating the heights of the pillars.

Output: You need to display k and the height of the pillars in descending order


Sample Input:
6
6 3 8 11 2 77

Sample Output:
3
77 11 8 6 3 2 
*/