#include<stdio.h>
struct student func1(struct student ); 
struct student
{
    char name[30];    
	int roll;
};
int main()
{
    struct student s1={"sangeeth",411};
    func1(s1); 
    return 0;
}

struct student func1(struct student s)
{
    printf("Name: %s\nRoll no: %d\n",s.name,s.roll);
}


