#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    printf("enter day : ");
    scanf("%d",&i);
    printf("enter month : ");
    scanf("%d",&j);
    printf("enter year : ");
    scanf("%d",&k);
    if(i>31 || j>12 )
    {printf("invailed date ");}
    else
    {printf("\n%d/%d/%d",i,j,k);}
    getch();

}
