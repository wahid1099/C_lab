#include<stdio.h>
void div(int a, int b, int *addtion, int *multiplication) {
   *addtion = a + b;
   *multiplication = a * b;
}
int main() {
   int a = 76, b = 10;
   int add,multiplication;
   div(a, b, &add, &multiplication);
   printf("Addition of number  is: %d\nMultiplication of number is: %d\n", add,multiplication);
return 0;
}
