#include<stdio.h>
int main (){
 
     int n;
     printf ("Enter array size : ");
     scanf("%d",&n);
     int num[n];
     for(int i=0; i<n; i++){
         scanf("%d",&num[i]);
     }

 for(int i=0; i<n; i=i+2){
        printf("%d ",num[i]);
    //  if (i % 2 != 0){
    //    
    //       }
        
 }


    return 0;
}