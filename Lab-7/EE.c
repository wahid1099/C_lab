#include<stdio.h>

int main (){

      int n;
      scanf("%d",&n);

      int sum = 0,m;
      while(n>0){

        m=n%10;
        sum+=m;
        n/=10;
}

printf("%d\n",sum);

      

    return 0;
}
