#include<stdio.h>

int main(){
      int x,y;
      scanf("%d%d",&x,&y);


      for (int i=1; i<=x; i++){



          for (int j=0;j<y;j++){

              if (i%4==0){
                  if (j==0){
                      printf("#");
                  }else{
                      printf(".");
                  }
              }
              else if (i%4==2){

                  if(j==y-1){
                      printf("#");
                  }else{
                      printf(".");
                  }
              }
              else{
                  printf("#");
              }
          }
          printf("\n");
      }

    return 0;
}