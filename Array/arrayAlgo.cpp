#include<iostream>

using namespace std;

int main () {

    int n;
    cout << "Enter a number: " ;
    cin >> n ;
    int arr[n] ;
    int sum = 0;
    float avg = 0;

    for (int i=0; i<n; i++){
        cout << "Enter " << i+1 << " no number: ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout << "Summation = " << sum << endl;

    avg = (float)sum/(float)n;

    cout << "Average = " << avg << endl;

    int max=arr[0];

    for(int i=1; i<n; i++) {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    cout << "Maximum number = " << max << endl;

    int min = arr[0];

    for(int i=1; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Minimum number = " << min << endl;

    return 0;
}

/****************
 * find summation
 * find average
 * find max number
 * find min number
 */