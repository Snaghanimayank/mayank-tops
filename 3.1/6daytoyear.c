#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,l,m;
    printf("enter days : ");
    scanf("%d",&i);
    j=i/365;
    k=i%365;
    l=k;
    m=l/30;
    printf("%d year %d month",j,m);
    getch();
}