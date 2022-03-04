#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    float per; 
    
};

int main()
{
    //struct student s1,s2,s3;
    //struct student s1={1};
    //struct student s2={"sangeeth",21,87.0},s3;
    //printf("Enter name, roll_no and percentage: ");
    //scanf("%s %d %f %s %d %f",s1.name,&s1.roll_no,&s1.per,s2.name,&s2.roll_no,&s2.per);
    //s3=s2;    // copy in one structure to another structure
    printf("Name: %s\nRollno: %d\nPercentage: %.2f\n",s1.name,s1.roll_no,s1.per);
    //printf("Name: %s\nRollno: %d\nPercentage: %.2f\n",s2.name,s2.roll_no,s2.per);
    //printf("Name: %s\nRollno: %d\nPercentage: %.2f\n",s3.name,s3.roll_no,s3.per);
    
}

