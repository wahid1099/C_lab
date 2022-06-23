#include <stdio.h>
 
int main()
{
 
 FILE *inputFIle=fopen("input.txt", "r");
 FILE *outputFIle=fopen("output2.txt", "w");
 if(inputFIle==NULL){
    printf("Error");
    return 0;
 }

 int n;

 fscanf(inputFIle, "%d", &n);
 fprintf(outputFIle, "%d", n);

 
 fclose(inputFIle);
 fclose(outputFIle);
  return 0;
}