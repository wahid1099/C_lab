// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 long long int n;

 while(cin >> n){
    if(n == 0) break;
    if(n>100){
        cout<<"f91("<<n<<") "<<"= "<<n-10<<endl;
    }else if(n>=100){
         cout<<"f91("<<n<<") "<<" = "<<n<<endl;
    }
 }
 
 
  return 0;
}