
#include<stdio.h>
int main (){

int n,x,y,i,dif,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++){

scanf("%d %d",&x,&y);
dif=y-x;
if(dif>=2 && x<y){

count++;
}

}
printf("%d",count);
return 0;


}

