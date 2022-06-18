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
void string_concat(char *str1,char *str2)
{
    int j=get_length(str1);
    for(int i=0;i<get_length(str2);i++)
    {
        str1[j]=str2[i];    // if length is 5, then the last index is 4. So, the new string that will concat will start copying from index 5
        j++;
    }
    str1[j]='\0';   // give the last index null. Before here j is increased one more because it was increasing after giving value.
                    // So, when it gave value to the last index it increased again in the loop and that's the last index now.
}
int main()
{
    char a[100]="hi ";
    char b[]="world";
    string_concat(a,b);
    printf("%s\n",a);
    return 0;
}