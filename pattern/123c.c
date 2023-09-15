#include<stdio.h>
#include<conio.h>
main()
{
    int l,i,j,k=1;
    printf("entern turms : ");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    getch();
}