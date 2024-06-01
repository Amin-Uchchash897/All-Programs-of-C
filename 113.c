// Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main()
{
    int i = 2, n, sum = 0;

    printf("Please Enter the value of n : \n");
    scanf("%d", &n);

    printf("-----------THE SUMMATION OF EVEN NUMBERS--------------\n");
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            printf("%d\n", sum);
        }
        i++;
    }
    printf("SUM OF ALL EVEN NUMBERS = %d", sum);

    getch();
}