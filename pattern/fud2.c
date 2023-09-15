#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,l,m,n;
    printf(" entern turms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(l=1;l<i;l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}