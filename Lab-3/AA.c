#include <stdio.h>
#include <string.h>
void main()
{
  char str[101],ch;
  int i,j,k,len;
  
   
       scanf("%s",str);
  len=strlen(str);
  
  for(i=0;i<len;i++)
  {
      for(j=i+1;j<len;j++)
      {
        if(str[i]==str[j])
	{
        
	 for(k=j;k<len;k++){
         str[k]=str[k+1];
     }
     j--;
     len--;
	}
        
    }

  }
    
   
	

   if(len%2==0){
        printf("CHAT WITH HER!");
   }else{
        printf("IGNORE HIM!");
   }
  }
  