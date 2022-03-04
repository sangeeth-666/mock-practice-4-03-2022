#include <stdio.h>
#include<stdlib.h>

struct emp
{
    int eno;
    char ename[20];
    float esal;
};
void main()
{
    struct emp* ptr;
    ptr=(struct emp*)malloc(sizeof(ptr));
    if(ptr==NULL)
    {
        printf("out of memory error\n");
    }
    else
    {
        printf("enter emp details:");
        scanf("%d %s %f",&ptr->eno,ptr->ename,&ptr->esal);
        printf("%d %s %f",ptr->eno,ptr->ename,ptr->esal);
    }
}

