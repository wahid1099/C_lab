#include <stdio.h>
 
int main()
{
 
int n,k;
scanf("%d",&n);
scanf("%d",&k);
int total=1;
 for(int i=0; i<n; i++){
  int optA=total*2;
  int optb=total+k;

    if(optA<optb){

       total=optA;
    }else{ 
      total=optb;
 }
 }
 printf("%d",total);

  return 0;
}