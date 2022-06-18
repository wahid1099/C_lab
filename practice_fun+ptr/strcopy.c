#include <stdio.h>
#include <string.h>



int string_copy(char str1[],char str2[]){
    int i;
    for( i=0; i<get_length(str2);i++){
              str1[i]=str2[i];
    }
    str1[i]='\0';
   
    

}

int get_length(char c[]){
    int count = 0;
    while(c[count] !='\0'){

        count++;
    } 
    
    
    
   return count;
    

}


int  main(){
   char a[]="hello";
   char b[]="world";
    string_copy(a,b);
  
   printf("after copioyng %s\n", a);

 

    return 0;
}