#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    printf("enter year : ");
    scanf("%d",&i);
    if(i%4==0)
    {printf(" \n%d is leepyear",i);}
    else
    {printf(" \n%d is not leepyear",i);}
    getch();
}