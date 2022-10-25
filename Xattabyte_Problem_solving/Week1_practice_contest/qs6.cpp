// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
*   Author:- MD wahid
*   
*/

int main()
{
  int numberOfTestCases;
    string m, s;
    char english[26] = {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };

 
 unordered_map<char, char> bytelandiantoenglish({{ '_', ' ' }});
 
    cin>>numberOfTestCases>>m;
 
    
    for(int i=0; i<m.size(); i++) {
        bytelandiantoenglish[english[i]] = m[i];
        
    }
 

   
    while (numberOfTestCases--)
    {
        cin>>s;
 
        for(int i=0; i<s.size(); i++) {
 
           
            char currentEnglishChar = bytelandiantoenglish[char(tolower(s[i]))];
 
          
            if(currentEnglishChar) {
 
               
                if(isupper(s[i])) {
                    cout<<char(toupper(currentEnglishChar));
                }
 
                else {
                    cout<<currentEnglishChar;
                }
            }
 
         
            else {
                cout<<s[i];
            }
        }
 
        
        cout<<endl;
    }
 
  return 0;
}