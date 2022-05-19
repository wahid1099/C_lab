#include<stdio.h>
 
 void printCall(){
     static int count = 0;

     count++;
     printf("“Called %d times\"\n",count);
    
     
 }


int main (){
 

   printCall();
    printCall();
     printCall();

    return 0;
}