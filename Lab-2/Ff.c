#include<stdio.h>

int main(){

   int x,y;

   scanf("%d%d",&x,&y);


   for(int i=1;i<=x;i++){

       if(i%2==0 && i%4==0){
        printf("#");

           for(int j=1;j<=y-1;j++){
            printf(".");
           }


           printf("\n");




       }
       else if(i%2==0){


           for(int j=1;j<=y-1;j++){
            printf(".");
           }
           printf("#");
           printf("\n");




       }

       else{
 for(int k=1;k<=y;k++){
            printf("#");
           }

          printf("\n");

       }




   }




    return 0;
}
