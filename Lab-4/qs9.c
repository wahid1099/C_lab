#include <stdio.h>
int  main() 
{
   int n, i;
   int *pt;

   scanf("%d",&n);
   int arr1[n];
   pt = &arr1[0];  
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	
	  scanf("%d",pt);
	  pt++;
	  } 	
	
   pt = &arr1[n - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
      printf("%d  ", *pt);
      pt--;
   }
printf("\n\n");

return 0;
}
