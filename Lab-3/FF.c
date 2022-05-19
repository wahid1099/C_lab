#include<stdio.h>
int main(){

   long long int num;
    int count=0;

   scanf("%lld",&num);

   //printf(" number is %lld",num);
   while(num != 0){

       if(num %10==4 || num %10==7){
           count++;

       }
        num /= 10;
   }

   //printf("ccount is %d",count);
   if(count == 4 || count == 7){
       printf("YES");
   }else{

       printf("NO");
   }

    return 0;
}