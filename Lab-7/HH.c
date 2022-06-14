#include<stdio.h>
#include<string.h>

int main (){

      char  n[100];
      scanf("%s",&n);

      int count = 0,yes=0;


      for (int i=0; i<strlen(n); i++){


        if( n[i] == n[i+1])
        {


            count++;
              
            if( count == 6){
                yes = 1;

            }



        }
       else if(n[i] != n[i+1]){
        count = 0;
       }
      }
      //printf("%d",yes);
     if(yes==1){
        printf("YES");
     }else{
         printf("NO");

     }





    return 0;
}
