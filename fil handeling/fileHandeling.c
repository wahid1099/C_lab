#include <stdio.h>


int main()
{
  FILE *inputFIle;
  inputFIle =fopen("input.txt","r");
  if(inputFIle==NULL){

    printf("Error! , No file Found");
    return 0;
  }


   FILE *outputFIle;
  outputFIle =fopen("output.txt","w");
  


// printf("%c\n",ch);

while(1){
  char ch=fgetc(inputFIle);

 if(ch==EOF){
  break;
 }

fputc(ch,outputFIle);

}


  return 0;
}
