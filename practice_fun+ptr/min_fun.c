#include <stdio.h>


int get_min(int a, int b){

    if(a<b){
        return a;
    }else{
        return b;
        }

}



int  main(){
    int x=0,y=1;

    int min=get_min(x,y);
    printf("-------\nmin: %d\n-------",min);

 

    return 0;
}