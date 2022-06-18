#include<stdio.h>
int main(){



 int a=100;
 int *p=&a;
 int **q=&p;

 printf("value of a is %d adress of -> %p\n",a,&a);
 printf("value of p is %p adress of p-> %p\n",p,&p);
 printf("value of a is %d adress of -> %p\n",**q,&q);

return 0;}
