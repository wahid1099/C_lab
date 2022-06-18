#include <stdio.h>
#include <string.h>



int find_firstIndex(char *str,char c){
    for (int i=0;i<strlen(str);i++){
        if (str[i]==c){
            return i;
        }

    }
    return -1;


}


int main(){


    char str1[]="hello";
    char c='l';
    int index=find_firstIndex(str1,c);
    printf("-----------------------------\n");
    printf("chrecter %c is found at %d\n",c,index);
 printf("-----------------------------");


    return 0;
}