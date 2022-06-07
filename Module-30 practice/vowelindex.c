#include<stdio.h>
#include<string.h>

int main (){


  char name[100];
     scanf("%s", &name);

    // printf("string is %s",name);

     for(int i=0; i<strlen(name); i++){

    // printf("string is %c and idex is : %d\n",name[i],i);
         if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' ||
       name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){
           printf("index of :  %d \n",i);
       }

     }



    return 0;
}
