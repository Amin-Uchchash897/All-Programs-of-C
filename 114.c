// Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

int main()
{
    int x = 1, number, sum = 0;

    printf("PLEASE ENTER THE VALUE OF NUMBER : \n");
    scanf("%d", &number);

    printf("----------THE SUMMATION OF ALL ODD NUMBERS------------\n");
    while (x <= number)
    {
        if (number % 2 != 0)
        {
            sum += number;
            printf("%d\n", sum);
        }
        x++;
    }
    printf("SUM OF ALL ODD NUMBERS = %d", sum);

    getch();
}