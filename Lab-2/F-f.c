#include<stdio.h>
#include <stdbool.h>  // as we are using boolean data type.

int main(){
    int n,x,y=1;
    bool a=true;
    bool b=false;

    scanf("%d%d",&n,&x);
    //  if(b==true){
    //     printf("#");
    //      a=true;
    //         b=false;
    // }
for(int i=1;i<=n;i++){



 if(b==true && i%2==0){

 printf("#");
b=false;
             a=true;


 }


    for (int j=1;j<=x;j++){
        if (i%2==0){
            printf("*");





        }

        


//         else if(i%2==0 && b==true){
// printf("*");

//         }

        else{
            printf("#");
        }



    }

     if(a==true && i%2==0){

 printf("#");
 b=true;
             a=false;



 }

   


    printf("\n");

}

    return 0;
}
