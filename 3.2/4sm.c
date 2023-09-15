#include<stdio.h>
#include<conio.h>
main()
    {
        int day;
        printf("   1.sunday   ||");
        printf("   2.monday   ||");
        printf("   3.tuesday   ||");
        printf("   4.wednusday   ||");
        printf("   5.thursday   ||");
        printf("   6.friday   ||");
        printf("   7.saturday   ");
        printf("\n\nEnter a day:");
        scanf("%d",&day);
        printf("\n\n\t\t");
        switch(day)
        {
            case 1:
                printf("sunday");
                break;
            case 2:
                printf("monday");
                break;
            case 3:
                printf("tuesday");
                break;
            case 4:
                printf("wednusday");
                break;
            case 5:
                printf("thrusday");
                break;
            case 6:
                printf("friday");
                break;
            case 7:
                printf("saturday");
                break;
            default :
                printf("Invalid Input");
                break;
        }
        getch();
    }