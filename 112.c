// Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Please Enter the value of n : \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        printf("%d\n", sum);
        i++;
    }
    printf("Sum of all natural numbers from (1 to n) : %d\n", sum);

    getch();
}