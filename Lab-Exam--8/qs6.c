#include <stdio.h>

int main(){

  int x=10;
  int *p;
  p=&x;
  
  int **q=&p;
   int ***r=&q;  
  printf("r=%d\n",***r);
  ***r=20;
  printf("r=%d\n",***r);
    return 0;
}
