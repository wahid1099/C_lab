
#include<stdio.h>
int main (){

int A,B,C,D,E,F,X,Takahashi,Aoki,rest1,rest2;

scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&X);




while(A+C<X){

    A=A+A;
    C=C+C;



}

printf("C : %d\n",A);


 Takahashi=(A+C)-X;
printf("A : %d\n",(Takahashi+A)*B);
printf("C : %d\n",C);
// if(A+C<X){
//     rest1=X-(A+C);
//     Takahashi=(rest1*B)+(A*B);

// }else{
//     Takahashi=A*B;
// }



// if(D+F<X){
//     rest2=X-(D+F);
//     Aoki=+(rest2-E)+(D*E);

// }else{
//     Aoki=D*E;
// }

// //printf("T: %d\n",Takahashi);
// // printf("A: %d\n",Aoki);

// if(Takahashi==Aoki){

//     printf("Draw");

// }else if(Takahashi>Aoki){
//     printf("Takahashi");
// }else{
//     printf("Aoki");
// }
return 0;


}

