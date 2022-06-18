#include <stdio.h>
float  make_sum(float a,float b){
    return a+b;
}
int main(){
    float x =3.5, y =3.2;
    float sum = make_sum(x,y);
    printf("sum = %.3f\n",sum);
     return 0;
}