#include<stdio.h>
int make_average(int *ar,int n) {
  int sum = 0;
    for(int i = 0; i < n; i++)
      {
        sum += ar[i];
      }
      return sum/n;
      }
    int main (){
        
    int num[7]={10, 20, 30, 40, 50,60, 70};
    int avg=make_average(num,7);
    printf("average: %d\n",avg);
    return 0;
    }