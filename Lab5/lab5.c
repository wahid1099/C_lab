#include<stdio.h>
int main(){





 int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


  int *pa3=&a[0];



    for (int i =0;i<9;i++){
     int *pai=&a[i];

      printf("%lld, %d\n",pai,*pai);
    }



  printf("%lld, %d -->>>%d\n",  &*(a+4),*pa3, &*(a+4));



return 0;
}
