#include<bits/stdc++.h>

using namespace std;

void a(int *);
void shanto(int);


int main () {

    int arr[] = {1,2,3,4,5,5,4,3,6,5,4,3,4,5,6,7,8,5,4,3,4,3,3,4,5,6,7,6,7};
    int arr1 = 10;
    shanto(arr1);
    a(arr);
    return 0;
}

void shanto(int n){
    cout << n << endl;
}

void a(int arr[]){

    int length=0;
    for(int i=0; arr[i] != '\0' ; i++){
        length ++ ;
    }

    cout << "Length = " << length << endl;
}

/*

*/