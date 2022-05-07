
// #include<stdio.h>
// int main (){

// int A,B,C,D,E,F,X,Takahashi,Aoki,rest1,rest2;

// scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&X);




// while(A+C<X){

//     A=A+A;
//     C=C+C;



// }

// printf("C : %d\n",A);


//  Takahashi=(A+C)-X;
// printf("A : %d\n",(Takahashi+A)*B);
// printf("C : %d\n",C);
// // if(A+C<X){
// //     rest1=X-(A+C);
// //     Takahashi=(rest1*B)+(A*B);

// // }else{
// //     Takahashi=A*B;
// // }



// // if(D+F<X){
// //     rest2=X-(D+F);
// //     Aoki=+(rest2-E)+(D*E);

// // }else{
// //     Aoki=D*E;
// // }

// // //printf("T: %d\n",Takahashi);
// // // printf("A: %d\n",Aoki);

// // if(Takahashi==Aoki){

// //     printf("Draw");

// // }else if(Takahashi>Aoki){
// //     printf("Takahashi");
// // }else{
// //     printf("Aoki");
// // }
// return 0;


// }


#include<stdio.h>
#define min(x,y) ((x<y)?x:y)

int main()
{
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int tkmin = min(a, x%(a+c));
    int taka = b*(a*(x/(a+c)) + tkmin);

    printf("Tk min : %d",tkmin);
    printf("Taka : %d",taka);


    int aokmin = min(d, x%(d+f));
    int aok = e*(d*(x/(d+f)) + aokmin);

    if(taka > aok) {
        printf("Takahashi\n");
    }
    else if(taka < aok) {
        printf("Aoki\n");
    }
    else {
        printf("Draw\n");
    }

  return 0;
}

