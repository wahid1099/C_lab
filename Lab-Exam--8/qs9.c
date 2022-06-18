#include <stdio.h>
#include <string.h>

int check_palindrome(char *ch){
    int count = 0;
 int i=0,j=strlen(ch)-1;
 while(i<j){

    if(ch[i] != ch[j]){
     count++;

    }
   i++;
   j--;
 }
 return count;

}

int main(){

   char str[100]="abcdba";
    int check_pl=check_palindrome(str);
    printf("%d\n",check_pl);
    return 0;
}