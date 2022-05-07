#include <stdio.h>
 
int main() {
    int S,T,X;
    scanf("%d %d %d",&S,&T,&X);
    
    if(S<T){
        if(X<T && S<=X){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        if(X<T || S<=X){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    
    return 0;
}
 
 
// // Online C compiler to run C program online Something
// #include <stdio.h>

// int main() {
//     int S,T,X;
//     scanf("%d %d %d",&S,&T,&X);
    
//     if(S<T){
//         if(X<T && S<=X){
//             printf("Yes\n");
//         }else{
//             printf("No\n");
//         }
//     }else{
//         if(X<T || S<=X){
//             printf("Yes\n");
//         }else{
//             printf("No\n");
//         }
//     }
    
//     return 0;
// }


