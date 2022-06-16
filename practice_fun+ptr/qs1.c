#include <stdio.h>


int get_max(int a, int b){

    if(a>b){
        return a;
    }else{
        return b;
        }

}



int  main(){
    int x=5,y=10;

    int max=get_max(x,y);
    printf("-------\nmax: %d\n-------",max);

 

    return 0;
}