// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 

  string a,b;
  int i,j,sum=0;
  int len1,len2;
  while(cin>>a>>b){
    sum=0;
    len1=a.length();
    len2=b.length();

    i=0;
    j=0;
    while (i<len1){
        while (j<len2){
            if(a[i]==b[j]){
                sum++;
                i++; 
                j++;
            }else{
                j++;
            }
        }
        if(sum==len1){
            cout<<"Yes"<<endl;
            break;

        }
        else{
            cout<<"No"<<endl;
            break;
        }
    }
    

    
  
  }
 
 
  return 0;
}