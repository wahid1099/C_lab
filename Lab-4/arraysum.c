#include<stdio.h>


void makeNArray(int n, int squares[]){
     for(int i=0; i<=n; i++){
          squares[i]=i*i;
      }

 for(int i=1; i<=n; i++){
          printf("%d\n",sqrNum[i]);
      }
}


int main(){


    int n;
    scanf("%d", &n);
    int sqrNum[n];
    makeNArray(n,sqrNum);

    return 0;
}
