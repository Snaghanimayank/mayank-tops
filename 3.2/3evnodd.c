#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    printf("enter num : ");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("your num %d is even",i);
    }
    else 
    {
        printf("your num %d is odd",i);
    }
    getch();
}