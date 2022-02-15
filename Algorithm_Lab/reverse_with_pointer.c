#include<stdio.h>

void arry(int *ptr, int l){

    for(int i=l-1; i>=0; i--){
        printf("%d ", *(ptr+i));
    }
}

int main () {
    
    int l;
    scanf("%d",&l);
    int arr[l] ;
    for(int i=0; i<l; i++){
        scanf("%d",&arr[i]);
    }
    int *p, i;
    p = arr;
    arry(p, l);
    return 0 ;
}