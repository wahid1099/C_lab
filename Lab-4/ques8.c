#include<stdio.h>
#include <string.h>
void stringCat(char a[], char b[], char out[]){
      strcat(a,b);
   strcat(out,a);
   printf("hello from func : %s\n",out);

}

int main(){

    char a[]="Hello";
    char b[]=" World";
     int lena=strlen(a);
     int lenb=strlen(b);
     int lenc=lena+lenb;



   char c[lenc+1];
   stringCat(a,b,c);


   printf("From main : %s\n",c);

    return 0;
}
