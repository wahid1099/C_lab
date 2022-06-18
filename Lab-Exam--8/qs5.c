#include <stdio.h>
#include <stdbool.h>

// bool check_array(int *array, int n){
//     //printf("%d\n", n);

   

//     bool result=false;

//     for(int i=0; i<n; i++){
      

//         count[array[i]]++;     

       
//     }

//     for(int i=0; i<n; i++){

//         printf("no %dappers %d\n", i, count[i]);
//     }
// }

int main(){
      
      int num[5]={1,3,2,5,5};
  // check_array(num,5);
    //   printf("%d\n",isAvailabe); 
    int c=0;

    int count[6]={0};


        for(int i=0; i<5; i++){
       
       int val=num[i];


        count[val]++;     

       
    }

    for(int i=1; i<=5; i++){
      //  int val=num[i];

        printf("value %d count %d\n", i, count[i]);
        if(count[i]==0){
            c++;
        }
    }
  printf("value of c is :%d \n",c);

       
    return 0;
}