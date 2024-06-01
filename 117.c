// Write a C program to find first and last digit of a number.

#include <stdio.h>

int main()
{
    int number, lastDigit, firstDigit;

    printf("Please Enter a number : \n");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10)
    {
        number /= 10;
    }
    firstDigit = number;

    printf("First digit = %d and Last digit = %d\n\n", firstDigit, lastDigit);

    getch();
}