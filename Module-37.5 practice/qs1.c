#include <stdio.h>

int get_sum(int *ar,int n) {
     int sum = 0;
     
    for(int i=0;i<n;i++)
       {

          
        sum+=ar[i];
       } 
        return sum;

}



int main(){ 

    int num[7]={10, 20, 30, 40, 50,60, 70};
    int arry_sum=get_sum(num,7);
    printf("sum = %d\n", arry_sum);


    return 0;
}