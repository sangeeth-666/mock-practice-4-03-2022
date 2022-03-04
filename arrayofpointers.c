#include<stdio.h>
struct student
{    
	char name[30];    
	int roll;    
	float per; 
};

int main()
{
    struct student s1,*ptr=&s1;
    printf("Enter name, roll no and percentage: ");
    scanf("%s %d %f",(*ptr).name,&ptr->roll,&ptr->per);
    printf("Name: %s\nRoll no: %d\npercentage: %f\n",(*ptr).name,ptr->roll,ptr->per);
    return 0;
}

