#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,temp,l;
    printf("enter num : ");
    scanf("%d",&k);
    temp=k%10;
    while(k>10)
    {
        k=k/10;
    }
    j=k+temp;
    printf("sum of friest and last disit is = %d",j);
    getch();
}