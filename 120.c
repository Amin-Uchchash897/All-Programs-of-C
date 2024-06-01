// Write a program to find the multiplication table of a number.

#include <stdio.h>

int main()
{
    while (1)
    {
        int number, i;

        printf("Please Enter a number : \n");
        scanf("%d", &number);

        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", number, i, number * i);
        }
    }
    return 0;
}