#include<stdio.h>
#include<string.h>

struct Date{
        int day;
        int month;
        int year;
        
    };
    struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
} ;

int main(){

     struct Student s1={
         .roll=221
     };
     char sname[]="MD wahid";
     strcpy(s1.name,sname);
     printf("Student Name : %s\n",s1.name);
     printf("Student Roll : %d\n",s1.roll);


    return 0;
}

