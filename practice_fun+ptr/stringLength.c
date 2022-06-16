#include <stdio.h>
#include <string.h>



int get_length(char c[]){
    int count = 0;
    while(c[count] !='\0'){

        count++;
    } 
    
    
    
   return count;
    

}



int  main(){
   char word[]="hellowahid";
   int len = get_length(word);
   printf("lenght of the word is %d\n", len);

 

    return 0;
}