#include <stdio.h>


int reverse_array(int *ar,int n){

    int i=0,j=n-1;
    while(i<j){

        int temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++; j--;
    }



}



int  main(){
    int num[7]={10,20,30,40,50,60,70};
    reverse_array(num,7);

    for(int i=0;i<7;i++){
        printf("%d\n",num[i]);
    }
 

    return 0;
}