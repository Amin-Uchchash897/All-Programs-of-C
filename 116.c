// Write a C program to count number of digits in a number.

#include <stdio.h>

int main()
{
    int number;
    int count = 0;

    printf("Enter a number please : \n");
    scanf("%d", &number);

    while (number != 0)
    {
        number /= 10;
        count++;
    }
    printf("Number of digits = %d", count);

    getch();
}