#include<bits/stdc++.h>

using namespace std;

int Partition(int arr[], int left, int right){
    int pivot = arr[left];

    while(left != right){
        if(pivot == arr[left]){
            if(arr[right] > pivot){
                right --;
            }
            else if (arr[right <= pivot]){
                swap(arr[left],arr[right]);
                pivot = arr[right];
                left ++;
            }
        }
        else if(pivot == arr[right]){
            if(arr[left] < pivot){
                left ++;
            }
            else if (arr[left] >= pivot){
                swap(arr[left], arr[right]);
                pivot = arr[left];
                right --;
            }
        }
    }
    return left;
}

void Quick_sort(int arr[], int left, int right){
    if (left < right){
        
        int pivot = Partition(arr,left,right);
        
        Quick_sort(arr,left,pivot-1);
        
        Quick_sort(arr,pivot+1, right);
    }
}

int main () {

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Quick_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}