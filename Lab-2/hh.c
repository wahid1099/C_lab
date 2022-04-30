
#include<stdio.h>
int main (){

int num;
scanf("%d",&num);

for(int i=0; i<num; i++){

    if(i%2==0){
        printf("I hate ");
    }else{

        printf("I love "); 
    }
    if (i != num - 1) {
            printf("that ");
        } else {
            printf("it ");
        }
}



// if(num==1){
//     printf("I hate it");
// }else if(num==2){
//     printf("I hate that I love it");
// }else if(num==3){
//     printf("I hate that I love that I hate it");
// }else{
//     printf("I hate that I love that I hate it");



return 0;


}

