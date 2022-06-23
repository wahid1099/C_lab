#include <stdio.h>

struct Student{
    char name[100];
  int roll;
  int marks;
  int total;	
};

 
int main()
{
 int n;
 scanf("%d", &n);
 struct Student student[n];

 for(int i=0;i<n;i++){
    scanf("%s %d %d", &student[i].name, &student[i].roll, &student[i].marks);
    int sum=0;
    for(int j=0;j<i;j++){
        if(student[i].roll==student[j].roll){
            sum+=student[j].marks;
        }
    }
    int new_sum=student[i].marks+sum;
    student[i].total=new_sum;
 }
printf("------------------------\n");
 for(int i=0;i<n;i++){
    printf("%s %d %d\n",student[i].name,student[i].roll,student[i].total);
 }

 
 
  return 0;
}