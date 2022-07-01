#include <stdio.h>

int change_values(int *ar,int n,int l,int r){
    for(int i=l;i<=r;i++){
        ar[i]=0;
    }
}
 
int main()
{
    int num[5]={10,20,30,40,50};
    change_values(num,5,1,3);
    for(int i=0;i<5;i++){
        printf("values are %d\n",num[i]);
    }
  return 0;
}