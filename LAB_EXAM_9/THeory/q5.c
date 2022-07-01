#include <stdio.h>
#include <string.h>
#include<stdbool.h>
 
int main()
{
 
char ch[10001];
int count[10]={0};
printf("Enter the string : ");
scanf("%s",&ch);
 int len=strlen(ch);
 for(int i=0;i<len;i++){
    count[ch[i]-'0']++;
 }
 bool found=true;
 for(int i=1;i<=10;i++){
    if(count[i]== 0){
        found=false;
        break;
    }
    //printf("count is %d \n",count[i]);
 }
 if(found){
printf("YES");
}else{printf("NO");}
 
  return 0;
}