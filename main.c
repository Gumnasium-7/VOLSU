#include <stdio.h>

void arr_mod(int n, int *per){
    int i;
    for(i=0; i<n; i++){
      *(per+i) *= 2;  
    }
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int *per = arr;
    arr_mod(n, arr);
    for(int j=0; j<n; j++){
        printf("%d\n", arr[j]);
    }
}
