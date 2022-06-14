#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main () {
   char ch[100];
   scanf("%s",&ch);
    int c=0,d=0;
    for(int i=1; i<strlen(ch); i++){
        if(islower(ch[i])){
              c++;
        }
        }

     for(int i=0; i<strlen(ch); i++){
      if(isupper(ch[i])){
         d++;
      }
     }

   if(islower(ch[0])&&c==0){
      ch[0]=toupper(ch[0]);
      for(int i =1; i<strlen(ch); i++){
         ch[i]=tolower(ch[i]);
      }
        printf("%s",ch);
        return 0;
    }
 if(d==strlen(ch)){
    for(int i =0; i<strlen(ch); i++){
         ch[i]=tolower(ch[i]);
      }
      printf("%s",ch);
      

 }   
   else{
printf("%s",ch);

   }


  
   
   return 0;
}