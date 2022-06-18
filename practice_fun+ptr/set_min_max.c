#include<stdio.h>

void set_min_max(int *a,int *b)
{
    if(*a > *b)
    {
        int tmp=*a;
        *a=*b;
        *b=tmp;
    }
}
int main()
{
    int x=10,y=5;
    set_min_max(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}