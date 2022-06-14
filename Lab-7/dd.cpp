#include <bits/stdc++.h>
int main(){int t;std::cin>>t;while(t--){std::map<int,int>m;int k,ans=-1;std::cin>>k;while(k--){int a;std::cin>>a;m[a]++;if(m[a]==3)ans=a;}std::cout<<ans<<std::endl;}}