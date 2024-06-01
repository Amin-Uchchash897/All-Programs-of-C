//Write a program to check time.

#include<stdio.h>

int main()
{
    int time;

    printf("Please Enter time: \n");
    scanf("%d", &time);

    if(time < 10){
        printf("Good Morning.\n");
    }
    else if(time < 18){
        printf("Have a Good day.\n");
    }
    else{
        printf("Good Evening.\n");
    }

    //return 0;
    getch();
}
