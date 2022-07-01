#include <stdio.h>
void sort(int *a, int n){
    for(int pos=0;pos<n-1;pos++){
        for (int check=pos+1;check<n;check++){
            if(a[check]<a[pos]){
                int temp=a[check];
                a[check]=a[pos];
                a[pos]=temp;
            }
        }

    }
}

int main()
{

int n,m,count=0;

scanf("%d %d",&m,&n);
int num[m];
for(int i=0;i<m; i++){
    scanf("%d",&num[i]);
}

sort(num,m);
// for(int i=0;i<m; i++){
//     printf("%d",num[i]);
// }

for(int i=0;i<n;i++){
   if(num[i]<0){
    count+=num[i];
   }


}
if(count != 0){
 printf("%d\n",-count);
}
 else{
 printf("%d",count);
 }


  return 0;
}
