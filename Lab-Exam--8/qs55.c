#include <stdio.h>
#include <stdbool.h>

int check_array(int *array, int n){
           int c=0;
            int count[n+1];
    for(int i=0; i<5; i++){
      int val=array[i];
       count[val]++;        
    }
    for(int i=1; i<=5; i++){
       if(count[i]==0){
        c++;
        break;
       }
        
    }
    return c;
}

int main(){
      
      int num[5]={1,3,4,5,5};
    int check=check_array(num,5);
    if(check==0){
        printf("Yes all elements are available\n");
    }else{
        printf("No all elements are not available\n");
    }


       
    return 0;
}