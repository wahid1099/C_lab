#include <stdio.h>
int change_array(int *ar,int n){
  int i=0,j=n-1;
  while(i<j){
        
        int temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++; 
        j--;
   }
}
int main(){
    int num[5]={1,2,3,4,5};
    int copyArray[5];
    for(int i=0; i<5; i++){
        copyArray[i]=num[i];

    }
    change_array(copyArray,5);
    for(int i=0;i<5;i++){
        printf("%d\n",copyArray[i]);
    }  
    return 0;
    }