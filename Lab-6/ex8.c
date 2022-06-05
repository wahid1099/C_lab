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
    unsigned int y;
    scanf("%u %u",&x,&y);
    char sx[100],sy[100],sxor[100];

    for (int i=x; i<y; i++){

    unsigned int xor=i^i+1;
     toBinary(xor,sxor,8);
      printf("sx = %d\n",xor);
     printf("sx = %s\n",sxor);

    }
    
    

     return 0;
 }