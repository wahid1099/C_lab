#include<stdio.h>
#include<stdbool.h>
#include<string.h>
 
struct Student
{
    char name[100];
};
struct Unique_Student
{
    char name[100];
};
 
int main(){
    int m;
    scanf("%d", &m);
	getchar();
    struct Student students[m];
    struct Unique_Student unique_students[m];
    int k = 0;
	int founded = 0;
 
    for (int i = 0; i < m; i++)
    {
        gets(students[i].name);
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (strcmp(unique_students[j].name, students[i].name) == 0)
            {
                found = true;
				founded++;
				// printf("Yes");
				// break;
            }
            
        }
        if (found == false)
        {
            strcpy(unique_students[k].name, students[i].name);
            k++;
        }  
    }
	if (founded)
	{
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
    
    
    
}
