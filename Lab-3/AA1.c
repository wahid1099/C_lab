#include<stdio.h>
#include<string.h>
int main()
{
    char c[10000],let[26]={0},s;
long l,n,i,max;
gets(c);l=strlen(c);
for(i=0;i<l;i++)
{
s=(c[i]);

let[s-97]++;
}

max=0;n=0;
for(i=0;i<26;i++)
{

if(let[i]==1 ||let[i]>1)
{
max++;
}
}

if(max%2==0)
n=1;

printf(“%s\n”,(n==1)?”CHAT WITH HER!”:”IGNORE HIM!”);

return 0;
}