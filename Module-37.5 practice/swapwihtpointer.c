#include <stdio.h>


void swap(int *a, int *b) {

    int temp =*a;
    *a = *b;
    *b = temp;


}

int main() {
    int x= 76 ,y= 80;


    swap(&x,&y);

    printf(" value of x is %d\n and y is %d\n",x,y);


    return 0;
}