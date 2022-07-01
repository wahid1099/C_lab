#include <stdio.h>
 #include<stdbool.h>

int main()
{
 
int n,m;
printf("Enter the array size: ");
scanf("%d",&n);
int ar[n];
bool mul=false;

printf("Enter the  elements : ");
for(int i=0;i<n;i++){

    scanf("%d",&ar[i]);
}
printf("Enter the Multiplication value : ");
scanf("%d",&m);

for(int i=0;i<n;i++){
    for(int j=i+1;j<n; j++){
        if(ar[i]*ar[j]==m){
            mul=true;
        }

    }
}

 if(mul){
    printf("YES");
 }else{printf("NO");}
 
  return 0;
}