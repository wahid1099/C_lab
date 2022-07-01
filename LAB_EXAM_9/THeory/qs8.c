#include <stdio.h>
 
int main()
{
 
int n;
printf("Enter the pattern number : ");
scanf("%d", &n);
for (int i = 0; i < n; i++){
    for (int j = 0; j<=i; j++){
       printf("*");
    }
   printf("\n");

}

   for (int k = n;k>=1;k-- ){
    for (int i = 1; i < k; i++){
        printf("*");
    }
    printf("\n");
   }
 
 
  return 0;
}