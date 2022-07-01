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
 int n;
 int ar[100000];
 scanf("%d",&n);

 for(int i=0; i<n; i++){
    int m;
    scanf("%d",&m);

    for (int i=0; i<m; i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,m);

    int min =100000;

      for (int i=1; i<m; i++){
        int val =ar[i]-ar[i-1];
          if(val<min){
        min=val;
        }

        }

    printf("%d\n",min);
 }



  return 0;
}
