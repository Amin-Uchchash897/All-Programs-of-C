//Write a program to convert Lower to Uppercase Letter.

#include<stdio.h>

int main()
{
    char lower;

    printf("Please Enter a Lower Character : \n"); //a = 97
    scanf("%c", &lower);

    printf("So the Upper Character is : %c\n", lower-32); // A = 65

    //return 0;
    getchar();
}
