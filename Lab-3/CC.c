#include <stdio.h>
// #include<string.h>
#include <string.h>

int main (){

  int n,count =0;
  scanf("%d",&n);
   char c[n];
//    fgets(c,sizeof(c),stdin);

   for(int i=0;i<n;i++){
       scanf(" %c",&c[i]);
     //  printf("%c",c[i]);
   }


  for(int i=0; i<n; i++){
      if(c[i]==c[i+1]){
          count++;
      }

  }

  printf("%d",count);


    return 0;
}

