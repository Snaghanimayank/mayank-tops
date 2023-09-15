#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    printf("1=cricle || 2=rectangle || 3=triangle \n chose one : ");
    scanf("%d",&i);
    if(i==1)
    {
        float pi,r,area;
        pi=3.14;
        printf("enter redious of cricle : ");
        scanf("%f",&r);
        area=pi*r*r;
        printf("area of the cricle is  %f ",area);
    }
    else if(i==2)
    {
        float i,j,area;
        printf("enter rectangle width : ");
        scanf("%f",&i);
        printf("enter rectangle length : ");
        scanf("%f",&j);
        area=i*j;
        printf("area of the rectangle is %f ",area);
    }
    else if(i==3)
    {
        float i,j,area;
        printf("enter triangle base : ");
        scanf("%f",&i);
        printf("enter triangle heigle : ");
        scanf("%f",&j);
        area=i*j*0.5;
        printf("area of the triangle is %f ",area);
    }
    else{printf("plese check input enter between 1to3");}
    getch();
}