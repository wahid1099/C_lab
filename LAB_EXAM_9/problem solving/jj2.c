#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    char s[n][21],t[n][21];
 
    for(int i=0;i<n;i++){
        scanf("%s %s",s[i],t[i]);
    }
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])==0 && strcmp(t[i],t[j])==0){
                flag=1;
            }
        }
    }
 
    if(flag==1)
        printf("Yes");
    else
        printf("No");
 
    return 0;
}