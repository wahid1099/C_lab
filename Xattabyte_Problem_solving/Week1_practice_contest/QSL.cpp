// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 long long int n,result;

 while(cin >> n){
    if(n == 0) break;


    if(n>100){
        result=n-10;
       
    }else if(n<=100){
        result=91;
         
    }

     cout<<"f91("<<n<<") "<<"= "<<result<<endl;
 }
 
 
  return 0;
}