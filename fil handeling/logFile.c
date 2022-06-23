#include <stdio.h>
 
int main()
{
 
FILE *logFIle=fopen("log.txt","a");
FILE *inputFile=fopen("habjijabi.txt","r");
if(inputFile==NULL){

    fprintf(logFIle,"Error found at 12.00 pn\n");
    return 0;
}
fprintf(logFIle,"Hello at 12.0 P M\n");
 
 
  return 0;
}