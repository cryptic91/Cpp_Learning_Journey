#include<bits/stdc++.h>

using namespace std;

void Merge(int arr[], int left, int right, int mid){
    int num1 = mid - left + 1;
    int num2 = right - mid;
    int L[num1];
    int R[num2];

    for(int i=0; i<num1; i++){
        L[i] = arr[left+i];
    }
    for(int j=0; j<num2; j++){
        R[j] = arr[mid + 1 + j];
    }
    int i=0, j=0, k=left;

    while(i<num1 && j<num2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < num1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < num2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void Merge_sort(int arr[], int left, int right){
    if (left < right){
        
        int mid = left + ((right-left)/2);
        
        Merge_sort(arr,left,mid);
        Merge_sort(arr,mid+1,right);
        Merge(arr,left,right,mid);
    }
}

int main () {

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}