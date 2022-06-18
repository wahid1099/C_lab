#include<stdio.h>


void print_oneToN(int n){

    for(int i=1; i<=n; i++){
        printf("-->%d\n", i);

    }




}

int main(){
     print_oneToN(7);
    return 0;
}