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
        if(i>=temp)
        {
            temp=i;
        }
        k=k/10;

    }
    printf("max num is =%d",temp);
    getch();
}