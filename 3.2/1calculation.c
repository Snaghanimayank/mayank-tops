#include<stdio.h>
#include<conio.h>
main()
{
    float add,sub,mul,div,mod;
    int a,b;
    char ch='%';
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("a+b=%f\n",add);
    printf("a-b=%f\n",sub);
    printf("a*b=%f\n",mul);
    printf("a/b=%f\n",div);
    printf("a%cb=%f\n",ch,mod);
    getch();
}