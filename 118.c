// Write a C program to find last and first digit of a number.

#include <stdio.h>

int main()
{
    int number, lastDigit, firstDigit;

    printf("Enter a number : \n");
    scanf("%d", &number);

    lastDigit = number % 10; // number = 123; lastDigit = 3;

    while (number >= 10)
    {
        number /= 10; // number = 1;
    }

    firstDigit = number;

    printf("First Digit = %d and Last Digit = %d\n\n", firstDigit, lastDigit);

    getch();
}