#include<stdio.h>
//#define N 10
struct student
{
    char name[30];    
	int roll;    
	float per; 
};
int main()
{
    struct student s1[20];
    int i,n=3;
    //printf("Enter no students:");
    //scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name, roll_no,and percentage: ");
        scanf("%s %d %f",s1[i].name,&s1[i].roll,&s1[i].per);
    }
    for(i=0;i<n;i++)
    {
        printf("student%d\nName: %s\nRollno: %d\nPercentage: %.2f\n\n",i+1,s1[i].name,s1[i].roll,s1[i].per);
    }
        return 0;
}

