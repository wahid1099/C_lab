#include <stdio.h>
#include<string.h>
int main (){

   int n;
   scanf("%d",&n);
   int num[n];
    int max=num[0];
   for(int i=0; i<n; i++){
       scanf("%d",&num[i]);
       if (max < num[i]) {
      max = num[i];
    }
   }
 





// for (int j = 1; j < n; ++j) {
    
//   }
  printf("max = %d\n",max);

int  dif,sum=0;

  for(int k=0; k < n; k++) {
      dif=max-num[k];
      sum+=dif;

        
  }

  printf("%d",sum);


    return 0;
}