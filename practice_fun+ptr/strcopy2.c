#include<stdio.h>

int get_length(char *str)
{
    int index=0;
    while(str[index]!='\0')
    {
        index++;
    }
    return index;
}
void string_copy(char *str1,char *str2)
{
    int i;
    for(i=0;i<get_length(str2);i++)
    {
        str1[i]=str2[i];    // str1 will get every index's value of str2 starting from 0
    }
    str1[i]='\0';   // give the last index null, as it won't understand where to stop
}
int main()
{
    char a[100]="hi";
    char b[]="world";
    string_copy(a,b);
    printf("%s\n",a);
    return 0;
}