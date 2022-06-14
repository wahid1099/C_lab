#include<stdio.h>
#include<string.h>
int main(){
     int n=0,z=0,k;

     scanf("%d",&k);
     char ch[k];
     scanf("%s",&ch);

     //printf("%s",ch);
     for(int i=0;i<strlen(ch);i++){
     //   printf("index is %d --- and char s %c\n",i,ch[i]);
        if(ch[i]=='n'){
            n++;
        }
       if(ch[i]=='z'){
       
            z++;
        }
     }

     while(n--){

        printf("1 ");
     }
      while(z--){
        printf("0 ");
      }
    
 
  
   

    return 0;
}