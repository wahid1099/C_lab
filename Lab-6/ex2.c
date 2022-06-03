#include <stdio.h>

struct Time{
    int Hour;
    int minitue;
    
    
};
struct Interval{
    struct Time start;
    struct Time end;
} ;



int main()
{
    struct Interval interval;
  interval.start.Hour=5;
  interval.start.minitue=30;
  
   interval.end.Hour=10;
  interval.end.minitue=15;
  
   printf("start:%d.%d\n",interval.start.Hour,interval.start.minitue);
    printf("end:%d.%d",interval.end.Hour,interval.end.minitue);



    return 0;
}
