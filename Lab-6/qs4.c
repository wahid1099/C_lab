#include<stdio.h>

struct Fraction{
    int num;
    int denom;
};
 struct Fraction inputFraction(){
     struct Fraction f;
     scanf("%d %d", &f.num, &f.denom);
     return f;
 };

struct Fraction reverse(struct Fraction a){
    struct Fraction ans;
    ans.num=a.denom;
    ans.denom=a.num;
    return ans;

};
 void print(struct Fraction f){
    printf("%d/%d",f.num,f.denom);
 };

int main(){
    struct Fraction a;
    a=inputFraction();


    print(reverse(a));



    return 0;

}
