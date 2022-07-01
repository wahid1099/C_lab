#include <stdio.h>
 
int main()
{
 long long  int ar[10]={1,2,3,4,1,5,6,7,8,9};
 long long int count[10]={0};

 for(int i=0; i<10; i++){
    count[ar[i]]++;
 }

 for(int i=1; i<10; i++){
    printf("value is %lld and count is %lld\n", i,count[i]);
 }
   return 0;
}