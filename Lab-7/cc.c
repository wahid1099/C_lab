#include<stdio.h>
#include<string.h>

int main (){

      char n[1000];
      scanf("%s",&n);

      int count[10] = {0};

      for(int i=0;i<strlen(n);i++){


         if(n[i]>= '0' && n[i] <='9'){
          //int val=n[i];

           count[n[i]-'0']++;
         }



      }

     for(int j=0;j<10;j++){
     printf("%d ",count[j]);


      }

    return 0;
}
