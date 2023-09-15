#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,a;
    printf("enter a: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d",i,j,i*j);
            printf("\n");
        }
        printf("\n\n");
    }
    getch();
}