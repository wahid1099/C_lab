#include <iostream>
using namespace std;

int main()
{
 int n,total_money,hotel_payment;
 cin >>n;

  hotel_payment =n/15;
  //cout <<hotel_payment;
  total_money =n*800 - hotel_payment*200;
  cout<<total_money;


 
 


    return 0;
}