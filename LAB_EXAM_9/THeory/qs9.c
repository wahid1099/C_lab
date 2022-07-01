#include <stdio.h>
 struct Student{
    int roll;
    int class;
    int marks;
 };
int main()
{
    int n;
    printf("Enter total student size : " );
    scanf("%d", &n);
    struct Student students[n];

    printf("Enter student roll class and marks : \n");
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&students[i].roll,&students[i].class,&students[i].marks); 
    }
  int sum=0;

     for(int i=0; i<n; i++){
       sum += students[i].marks;
    }
 printf("Total marks: %d\n",sum);
 
  return 0;
}