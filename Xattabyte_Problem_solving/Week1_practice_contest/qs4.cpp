// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int t;
 cin >> t;
 int n,u;
 cin >>n>>u;
 int num[n+1];
 for(int i=0;i<=n;i++){
    num[i]=0;

 }
 int l,r,val;


  for(int i=0;i<u;i++){
    cin>>l>>r>>val;
    for (int j=l;j<=r;j++){
        num[j]+=val;
    }
}

int q,o;
cin >> q;

// for(int i=0; i<n;i++)
// {
//     cout<<"Value of num is "<<num[i]<<endl;
// }
for(int i=0; i<q; i++){
    cin>>o;
    cout<<num[o]<<endl;
}
 
  return 0;
}