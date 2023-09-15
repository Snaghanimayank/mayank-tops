#include<stdio.h>
#include<conio.h>
main()
{
    int i,j=0,k=1,l=j+k,m;
    printf("enter terms you get : ");
    scanf("%d",&m);
    printf("fibonacci series : \n%d, %d, ",j,k);
    for(i=1;i<=m-2;i++)
    {
        printf("%d, ",l);
        j=k;
        k=l;
        l=j+k;
    }
    getch();


}