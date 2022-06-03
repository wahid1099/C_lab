#include<stdio.h>
#include<string.h>

void makeStrCopy(char in[], char out[]){
       strcpy(out,in);	//
       printf("%s",out);
}



int main(){


     char str1[]="hello";
     int lena=strlen(str1);
     char str2[lena+1];
     makeStrCopy(str1,str2);

    return 0;
}
