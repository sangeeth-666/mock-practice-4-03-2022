#include<stdio.h>
struct date
{
    int day;        
	int month;        
	int year;    
};
struct student
{
    char name[30];    
	int roll;    
	struct date birth;    
	float per; 
};
int main()
{
    struct student s1;    
	printf("Enter name, roll_no,date of birth and percentage: ");    
	scanf("%s %d %d %d %d %f",s1.name,&s1.roll,&s1.birth.day,&s1.birth.month,&s1.birth.year,&s1.per);   
	printf("Name: %s\nRollno: %d\nDate of birth: %d-%d-%d\nPercentage:%.2f",s1.name,s1.roll,s1.birth.day,s1.birth.month,s1.birth.year,s1.per);    
}

