#include<stdio.h>
#include<string.h>


int main(){

    int c=0,count=0;
    char templae[]="heidi";
    char word[1000];
    scanf("%s",&word);

    for(int i=0; i<strlen(word); i++){
       if(word[i]==templae[count]){
       c++;
       count++;

       }


    }
    

    if(c==5){
        printf("YES");
    }else{
        printf("NO");
        }

    return 0;
}