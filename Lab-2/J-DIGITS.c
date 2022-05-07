
  
#include<stdio.h>

int main(){

int i,num,a,b,c,sum1,sum2,sum3,total;
scanf("%d",&num);
 
c=num%10;
   num=num/10;


b=num%10;
num=num/10;


a=num%10;
num=num/10;
      sum1=a*100+b*10+c*1;
sum2=b*100+c*10+a*1;
sum3=c*100+a*10+b*1;

total=sum1+sum2+sum3;

printf("%d",total);


return 0;


}