
#include<stdio.h>
int main (){

int i,A,B,count=0;
scanf("%d%d",&A,&B);
for(i=A;i<=B;i++){

    if(A<=i && i<=B){
        count++;
    }
}
printf("%d",count);
return 0;


}

