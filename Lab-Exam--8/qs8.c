#include <stdio.h>


//----------First sample-------------------//
//----------has retrun and has param-------------------//


int odd_even(int x) {
    if (x %2==0){
        return 1;
    }else{
        return 2; 
        }
    
}



//----------second sample-------------------//
//----------no retrun and has param -------------------//

int odd_even(int x) {
    if (x %2==0){
      printf("even \n");
    }else{
        printf("odd \n");
        }
    
}

//----------has retrun and no param -------------------//

int odd_even() {
    int x;
    scanf("%d", &x);
    if (x %2==0){
      return 1;
    }else{
       return 2;
        }
    
}

//----------no retrun and no param -------------------//

int odd_evens() {
    int x;
    scanf("%d",&x);

    if (x %2==0){
      printf("even \n");
    }else{
        printf("odd \n");
        }
    
}

int main(){

     
    //----------first test-------------------//
     int num = odd_even(10);
     if (num ==1){
        printf("Even \n");

     }else{
        printf("odd \n");
        }

        //----------second test-------------------//
         odd_even(5);

         //----------third----------------------------------------------------------------//
          odd_evens();

          //----------fourth----------------------------------------------------------------//
           int nums = odd_even();
     if (nums ==1){
        printf("Even \n");

     }else{
        printf("odd \n");
        }

    return 0;
}