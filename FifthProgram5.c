//Write a program how to take an integer number from user.

#include<stdio.h>

int main()
{
    int myName;
    char myChar;

    printf("Please press your number and character: \n");
    scanf("%d %c",&myName,&myChar);
    printf("Your desirable number is: %d\n", myName);
    printf("Your desirable character is: %c\n", myChar);

    return 0;
}
