#include<stdio.h>


    struct calculation{
        int addition;
        int subtraction;
        int division;
        int multiplication;
    };

    struct calculation cal(int a , int b){
        struct calculation ans;
        ans.addition=a+b; 
        ans.subtraction=a-b;
        ans.division=a/b;
        ans.multiplication=a*b;
        return ans;
    };
 void print(struct calculation c){
    printf("Additon : %d\n",c.addition);
    printf("Substraction : %d\n",c.subtraction);
    printf("Division : %d\n",c.division);
    printf("Multiplication : %d\n",c.multiplication);
 };

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    print(cal(a,b));



    
    


    return 0;
}

