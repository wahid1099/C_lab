#include<stdio.h>
int main()
 
{
    int n,k,a;
    scanf("%d %d %d",&n,&k,&a);
    int answer;
    while(k>0)
 
    {
        k--;
        printf("value of k %d\n",k);
        answer=a;
        printf("value of ans %d\n",answer);
        a++;
        printf("value of a %d\n",a);
        if(a==n+1)a=1;
 
    }
    printf("%d",answer);
}