#include <stdio.h>
#include <string.h>

int main()
{
char ch[1000];
int i,c=0;
scanf("%s",&ch);
int count[4]= {0};
int len =strlen(ch);
//printf("lenght is %d\n",len);
for(i=0; i<len; i+=2){
    //int val = ch[i];
    //printf("ch is %c\n",ch[i]);
    count[ch[i]-'0']++;

}
// for(int i=1; i<4;i++){
//     printf("%d\n",count[i]);
// }


for(int i=1; i<4;i++){
   // printf("%d\n",count[i]);
    for(int j=0; j<count[i];j++){
        
       // printf("c is %d ",c);
       if(c != 0){
                 printf("+");
            }
        if(count[i] != 0){
             printf("%d",i);

            

        }
       c++;


    }
}
  return 0;
}
