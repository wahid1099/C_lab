#include<stdio.h>


int number=5;
 
 void set(int v){
    number=v;
    printf("v is now  %d\n",number);
     
 }
 void makeDouble(){
     number*=2;
      printf("v is now double : %d\n",number);

 }

  void print(){
    printf("from print function %d\n",number);
     
 }


int main (){
 
 printf("v is now from global %d\n",number);
  set(10);
  
  
  set(5);
  set(15);

  
   makeDouble();
   makeDouble();
    print();
    
    return 0;
}