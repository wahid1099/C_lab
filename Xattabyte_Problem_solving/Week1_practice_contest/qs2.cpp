// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int n;
 cin>>n;
 int num[n];
 for(int i=0; i< n; i++){
    cin>>num[i];
 }
 int q;
 cin>>q;
 for(int i=0; i<q; i++){
    int x,y;
    cin>>x>>y;
    int sum ;
    sum = 0;

    for(int i=x; i<=y;i++){
        // cout<<"value of num is"<<num[x]<<endl<<endl;
        sum += num[i];
    }

    cout<<sum<<endl;
 }
 
 
  return 0;
}