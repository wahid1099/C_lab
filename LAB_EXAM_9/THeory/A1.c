#include <stdio.h>
//function without param and retun
 void funa(){
    int x,y;
    printf("Enter two values : ");
        scanf("%d %d",&x,&y);
    printf("Sum of two values : %d\n",x+y);
 } 
//function without return but has parameter
 void funb(int x,int y){
  printf("Sum of two values : %d\n",x+y);
 }
//function with retrun and has param -------------------//
int func(int x,int y){
  return x+y;
}
//function with retrun and but didn't has param
int fund(){
  int x,y;
  scanf("%d %d",&x,&y);
  return x+y;
}
int main()
{
    funa();
    funb(5,10);
    func(5,5);
    fund();
  return 0;
}