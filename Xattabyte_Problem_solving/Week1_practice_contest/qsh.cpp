// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

int n,q,query,reg=0,ans=0;


while(cin>>n>>q , n!=0 && q!=0){
int num[n];
 for(int i=0;i<n; i++){
    cin>>num[i];
 }
sort(num,num+n);
int ans=0;
bool found=false;
cout<<"CASE# "<<++reg<<":"<<endl;
 for(int i = 0; i < q; i++) {
    cin>>query;
    for(int i = 0; i <n; i++){
        if(query==num[i]){
            ans+=i+1;
            found=true;
            break;

        }
    }
    if(found){
        cout<<query<<" found at "<<ans<<endl;
    }else{
        cout<<query<<" not found"<<endl;
    }



 }
}

 
 
  return 0;
}