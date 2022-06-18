#include <stdio.h>

void take_input(int *ar,int n){


    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }



}

int main(){
      int arr[5];
      take_input(arr,5);

         for(int i=0; i<5; i++){
        printf("Elements of array is  %d \n",arr[i]);
    }
    return 0;
}