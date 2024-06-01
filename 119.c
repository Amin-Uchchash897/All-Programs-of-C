// Write a C program to count number of digits in a number.

#include <stdio.h>

int main()
{
    int number;
    int count = 0;

    printf("Enter a number : \n");
    scanf("%d", &number); // number = 123;

    while (number != 0)
    {
        number /= 10; // number = 0;
        count++;      // count = count + 1 = 0+1 = 1+1 = 2+1 = 3;
    }

    printf("Number of digits = %d\n", count);

    getch();
}