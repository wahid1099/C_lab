#include <stdio.h>


int count_swaps(int *ar,int n){

     int count = 0;

     for(int pos=0;pos<n-1;pos++){

        for (int check=pos+1;check<n;check++){
            if(ar[check]<ar[pos]){
                int temp=ar[check];
                ar[check]=ar[pos];
                ar[pos]=temp;
                count++;
            }
        }

     }
     return count;

}

int main(){
     int ar[5]={1 ,2 ,3 ,4, 5 };
   int swap= count_swaps(ar,5);

    
   printf("%d\n",swap);



    return 0;
}