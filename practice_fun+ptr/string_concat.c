#include <stdio.h>
#include <string.h>

int get_length(char c[]){
    int count = 0;
    while(c[count] !='\0'){

        count++;
    } 
    
    
    
   return count;
    

}

void string_concat(char str1[],char str2[]){
    int j=get_length(str1);
    int i;
    for( i=0; i<get_length(str2);i++){
              str1[j]=str2[i];
              j++;
    }
    str1[j]='\0';
   
    

}




int  main(){
   char a[100]="hello ";
   char b[]="world";
    string_concat(a,b);
  
   printf("after concating %s\n", a);

 

    return 0;
}