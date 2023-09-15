#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,temp=0;
    printf("enter num : ");
    scanf("%d",&k);
    while(k!=0)
    {
        i=k%10;
        temp=temp+i;
        k=k/10;

    }
    printf("sum of num is =%d",temp);
    getch();
}