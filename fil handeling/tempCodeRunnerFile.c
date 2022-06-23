#include <stdio.h>
 
int main()
{
 
FILE *logFIle=fopen("log.txt","a");
fprintf(logFIle,"Hello at 12.0 P M\n");
 
 
  return 0;
}