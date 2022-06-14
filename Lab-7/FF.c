#include<stdio.h>
#include<string.h>
#include <stdbool.h>


int main (){
    int n,k;
    
    bool result = true;
    
    scanf("%d",&n);

  for (int i=0; i<n;i++){
 
   scanf("%d",&k);
  
   char num[k];

   scanf("%s",&num);

     if(k<11){
        result = false;
     }

    else{

        result=false;
        for(int i=0;i<k; i++)
        {
             if(num[i]=='8' && k-i>=11)
             {
        
        result = true;
       
       
        break;
             }
        }


    }
      if(result){
    printf("YES\n");
  }else{
    printf("NO\n");
  }



  }





    return 0;
}
