#include <stdio.h>
 struct Fun
{
    int sum;
};

int main()
{
    struct Fun abc={10};
    struct Fun *fun=&abc;
    fun->sum=20;
    printf("sum is =%d\n",abc.sum);
  return 0;
}