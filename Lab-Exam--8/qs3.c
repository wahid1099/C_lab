#include <stdio.h>
#include <string.h>

int count_zero(char *str){
    int count = 0;
    for (int i;i<strlen(str);i++){
        if (str[i]=='0') count++;
    }
    return count;
}
int main(){ 
    char c[]="10000101111000000001110";
    int zeros=count_zero(c);
    printf("Total zeros: %d\n", zeros);
    return 0;
}
