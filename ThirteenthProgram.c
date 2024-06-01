//Write a program for which kind of result a student have done.

#include<stdio.h>

int main()
{
    int number;

    printf("Please Enter the mark: \n");
    scanf("%d", &number);

    if(number >= 80){
        printf("The student got A+\n");
        printf("Congratulations!\n");
    }
    else if(number >= 70 && number <= 79){
        printf("The student got A\n");
    }
    else if(number >= 60 && number <= 69){
        printf("The student got A-\n");
    }
    else if(number >= 50 && number <= 59){
        printf("The student got B+\n");
    }
    else if(number >= 33 && number <= 100){
        printf("The student have passed the examination.\n");
    }
    else{
        printf("The student has failed the examination.\n");
    }

    //return 0;
    getch();
}
