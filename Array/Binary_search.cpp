#include<bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int left, int right, int search){

    if(right < left){
        return 0;
    }
    else{

        // int mid =  left + (right-left)/2 ;
        int mid =  (right+left)/2 ;

        if(arr[mid] == search){
            return 1;
        }
        else{

            if(arr[mid] > search){
                right = mid - 1;
                return binary_search(arr, left, right, search);
            }
            else {
                left = mid + 1;
                return binary_search(arr, left, right, search);
            }

            return 0;
        }
    }

}

int main () {

    int n;
    cout << "Enter index: " ;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >>  arr[i] ;
    }

    sort(arr, arr + n);

    int search;
    cout << "Enter the number you want to search: " ;
    cin >> search ;
    
    int left = 0, right = n-1 ;

    int x = binary_search(arr, left, right, search);

    if (x == 1){
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}