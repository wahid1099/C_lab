#include<stdio.h>  
void main()   
{   

    int n,count =0;
  scanf("%d",&n);
   char str[n];   
   printf("Enter the string? ");  
   fgets(str, n, stdin);   
   printf("%s", str);  
   for(int i=n;i>0;i--){
       printf("%s",&str[i]);
   }
 
}   