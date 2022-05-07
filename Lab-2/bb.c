#include<stdio.h>

int main()
{
    int n, pi, qi, available = 0 ;
    scanf("%d",&n);
    
    if(pi<=qi){
        for(int i=1; i<=n; i++){
        
            scanf("%d %d", &pi, &qi);
            
            //printf("%d %d\n", pi, qi);
               if (qi-pi>=2 && pi<qi ){
    
                   available++;
    
               }
       }
    
     printf("%d",available );
    
     }
    return 0;
}
