#include<stdio.h>
#include<string.h>
int main(){

   int n;

   scanf("%d",&n);

   char c[100];
   while(n--){

       scanf("%s",c);
       for(int i = 0; i <=strlen(c);i+=2){
           printf("%c",c[i]);
       }


 printf("%c",c[strlen(c)-1]);
 printf("\n");
   }



    return 0;
}
