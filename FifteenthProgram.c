//Write a program to check a year leap year or not.

#include<stdio.h>

int main()
{
    int year;

    printf("Please Enter a year : \n");
    scanf("%d", &year);

    if (year % 400 == 0){
        printf("%d is a Leap year \n", year);
    }
    else if (year % 100 == 0){
        printf("%d isn't a Leap year \n", year);
    }
    else if (year % 4 == 0){
        printf("%d is a Leap year \n", year);
    }
    else{
        printf("%d isn't a Leap year \n");
    }

    //return 0;
    getch();
}
