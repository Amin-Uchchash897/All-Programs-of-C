// Write a C program to print multiplication table of any number.

#include <stdio.h>

int main()
{
    int number, i;

    printf("ENTER THE NUMBER FOR MULTIPLICATION TABLE : \n");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }

    getch();
}