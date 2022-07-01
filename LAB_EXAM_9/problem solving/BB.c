#include <stdio.h>
#include <string.h>

 
int main()
{
 char ch[51];
 scanf("%s", &ch);
 int count=0;
 int len=strlen(ch);
 int totalA;

 //printf("The string is %s\n",ch); 
for(int i=0;i<len;i++){
    if (ch[i]=='a'){
        count++;
    }


}
//    printf("Count is %d\n\n",count);
//    printf("len is %d\n\n",len);
  
   totalA=len-count;
    //printf("totalA is %d\n\n",totalA);

    // if (count <= totalA){
    //     printf("%d",2*count-1);
    // }
    // else if(count == len){
    //     printf("%d",count);
    // }
   if(len<2*count-1){
    printf("%d\n",len);
   }else{
    printf("%d",2*count-1);
   }

   
 
 
 
  return 0;
}