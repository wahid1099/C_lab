#include<stdio.h> 
#include <string.h>

char *strrev(char *str){
    if(!str || ! *str)
    return str;

    int i =strlen(str)-1,j=0;
    char ch;
    while(i>j){
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i--;
         j++;
    }
    return str;
}

void toBinary(unsigned int val, char str[],int k){
      int idx=0;

    while (val>0){
        int d=val%2;
        val=val/2;
        
        str[idx]='0'+d;
        idx++;

    }
   for (int i=idx;i<k;i++) str[i]='0';
   str[k]=0;
   strrev(str);
}



 int main (){ 
    unsigned int x;
   
    scanf("%u",&x);
    char sx[100],sy[100],sleft[100],sright[100];
   unsigned char lx=x<<3;

  

   toBinary(lx,sleft,8);
    while(sleft)

   printf("lx=%d,%s\n",lx,sleft);
    

     return 0;
 }