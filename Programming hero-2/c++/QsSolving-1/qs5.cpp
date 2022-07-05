#include <iostream>
using namespace std;

int main()
{
 int n,k,x,y,sum=0;
 cin >> n >> k >> x >> y;

 for (int i=1;i<=n;i++){
    if (i>k){
        sum +=y;
    }else{
        sum+=x;}
 }
 cout<<sum;


    return 0;
}