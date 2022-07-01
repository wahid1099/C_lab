#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i %2 == 0 && i %7 == 0){
            printf("Divisional by 2 and 7 is : %d\n",i);
        }
    }
  return 0;
}