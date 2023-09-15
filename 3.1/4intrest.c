#include<stdio.h>
#include<conio.h>
main()
{
    float intrest,i,j,total;
    printf("enter your invest : ");
    scanf("%f",&i);
    printf("persantage of intrest : ");
    scanf("%f",&j);
    intrest=(i*j)/100;
    printf("intrest is : %f ",intrest);
    total=i+intrest;
    printf("\ntotal = %f",total);
}