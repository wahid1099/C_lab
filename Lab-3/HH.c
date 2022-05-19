#include<stdio.h>

int main(){

   int n,x;
   scanf("%d%d", &n,&x);
   int num[n];

   for(int i=0; i<n; i++){
       scanf("%d",&num[i]);
   }




   for(int i=0,j=n-1; i<x-1; i++,j--){
       int temp=num[i];
       num[i]=num[j];
       num[i]=temp;
   }

   for(int i=0;i<n;i++){
   printf("%d",num[i]);

   }





    return 0;
}
