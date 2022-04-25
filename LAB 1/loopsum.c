#include<stdio.h>
int main(){


int n,i;
float num1,num2;
scanf("%d",&n);
float sum=0;


for(i=1;i<=n;i++){


scanf("%f %f",&num1,&num2);
sum=num1+num2;

}


printf("%.3f",sum);



return 0;}


