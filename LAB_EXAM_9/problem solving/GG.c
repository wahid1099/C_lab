#include <stdio.h>
#include <string.h>

 
int main()
{
 int l,r;
 char ch[100000];
 
 scanf("%d %d",&l,&r);
  scanf("%s",&ch);
  int len=strlen(ch);
  char ch2[len];

  for(int i=l-1,j=r-1;i<=j;i++,j--) {
   // ch2[i]=ch[j];
    //ch[i]=ch[j];
    char temp=ch[i];
    ch[i]=ch[j];
    ch[j]=temp;


  }
   printf("%s",ch);

 
 
  return 0;
}