#include<stdio.h>
int main(){


int a,b,c,i;

scanf("%d %d %d",&a,&b,&c);



for(i=1;i<=c;i++){

if(i%a==0 && i%b==0){
printf("FizzBuzz\n");



}else if(i%a==0){
printf("Fizz\n");


}else if(i%b==0){

printf("Buzz\n");}

else{

printf("%d\n",i);



}

}





return 0;


}



