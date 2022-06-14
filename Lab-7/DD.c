#include <stdio.h>
#include <string.h>
int main(){
    int t,n;
    	int s = -1;
    scanf("%d",&t);
    while(t--){

     scanf("%d", &n);
     int num[n+1];
      int count[200001] = {0};
     for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
count[num[i]]++;
     }

 
   for(int val=1; val<=n; val++)
  {

    if(count[val]>=3){
        s = val;
				break;
    }

  }

printf("%d\n", s);

 
}
   return 0;

}
