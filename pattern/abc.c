#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {printf("%2c",ch++);}
        printf("\n");
    }
    getch();
}