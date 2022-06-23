#include <stdio.h>
 
int main()
{
 
  FILE *inputFIle;
  FILE *outputFIle;
  inputFIle =fopen("input.txt","r");
  if(inputFIle==NULL){

    printf("Error! , No file Found");
    return 0;
  }


   
  outputFIle =fopen("output.txt","w");
  int n;
  fscanf(inputFIle,"%d",&n);

  int sum=0;
  for(int i=0; i<n;i++){

    int a;
    fscanf(inputFIle,"%d",&a);
    sum+=a;
  }
 fprintf(outputFIle,"Sum--> %d\n",sum);
 
  return 0;
}