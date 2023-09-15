#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,l;
    printf("enter num: ");
    scanf("%d",&k);
    while(k>0)
    {
        i=k%10;
        printf("%d",i);
        k=k/10;
    }
    getch();
}