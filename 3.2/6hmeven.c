#include<stdio.h>
#include<conio.h>
main()
{
    int i,j=0,k;
    printf("enter num : ");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(i%2==0)
        {
            j++;
        }
    }
    printf("there are %d even num",j);
    getch();
}