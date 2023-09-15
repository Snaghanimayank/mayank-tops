#include<stdio.h>
#include<conio.h>
main()
{
    int i,a,j=1,b;
    printf("enter a: ");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        b=j*i;
        j=b;
    }
    printf(" %d ",b);
    getch();
}