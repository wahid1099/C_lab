#include<stdio.h>


// // function to copy an array
// void copyArray(int arr[], int copy[], int size)
// {
//   // loop to iterate through array
//   for (int i = size; i >=0; --i)
//   {
//     copy[i] = arr[i];
//   }
// }


// // function to display an array
// void displayArray(int arr[], int size)
// {
//   for (int i = 0; i < size; i++) {
//     printf("%d ",arr[i]);
//   }
// }

int main (){
  // original array
  // int arr[] = {10, 20, 30, 40, 50};
  // // calculate size
  // int size = sizeof(arr)/sizeof(arr[0]);
      
  // // create new array
  // int newArr[size];

  // // copy array
  // copyArray(arr, newArr, size);
      
  // // display array
  // printf("Original array = ");
  // displayArray(arr, size);
  // printf("\nCopied array = ");
  // displayArray(newArr, size);



     int n;
     printf ("Enter array size : ");
     scanf("%d",&n);
     int num[n];
     for(int i=0; i<n; i++){
         scanf("%d",&num[i]);
     }


    
 for(int i=n-1,j=0; i>=0,j<n;j++, i--){
      printf(" %d ",num[j]-num[i]);
     
      
    
        
 }
  


    return 0;
}