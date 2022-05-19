#include<stdio.h>
int main(){


int n,i;
float num1,num2;
scanf("%d",&n);
float mult,sum=0;


for(i=1;i<=n;i++){


scanf("%f %f",&num1,&num2);
mult=num1*num2;
sum+=mult;
}


printf("%.3f",sum);



return 0;}


