#include<stdio.h>
#define min(k,y) ((k<y)?k:y)

int main(){

   int n,k,a,i,x=0,y;
  scanf("%d%d%d",&n,&k,&a);


int tkmin = (a+n)%k-1;
//     int taka = b*(a*(x/(a+c)) + tkmin);
// while(k>0){
//    x++;
//    k--;
//    printf("x value %d and k value %d  \n",x,k);
//   if(x==n){
//       x=0;


//   }

// }   

printf("%d",tkmin);

    return 0;
}